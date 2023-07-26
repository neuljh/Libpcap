#include<pcap.h>
#include<string>
#include<iostream>
#include<ctime>
#include <arpa/inet.h>
#include"libpcap2_2.h"

using namespace std;

string libpcap2_2::res;
int libpcap2_2::number;

class libpcap2_2_cpp{
public:
    static void packet_callback(u_char *argument,const struct pcap_pkthdr* packet_header,const u_char* pack_content){
        static int packet_number=1;
//        printf("The %d packet is captured.\n",packet_number);
        string str="The "+to_string(packet_number)+" packet is captured.\n";
        libpcap2_2::res=libpcap2_2::res+str;
        packet_number++;
    }

    void solution()
    {
        pcap_t* pcap_handle;//2

        char error_content[PCAP_ERRBUF_SIZE];//1

        char* net_interface;
        struct bpf_program bpf_filter;
        char bpf_filter_string[]="ip";
        bpf_u_int32 net_mask;//3
        bpf_u_int32 net_ip;//3
        net_interface=pcap_lookupdev(error_content);
        pcap_lookupnet(net_interface,&net_ip,&net_mask,error_content);
        pcap_handle=pcap_open_live(net_interface,BUFSIZ,1,0,error_content);

        pcap_compile(pcap_handle,&bpf_filter,bpf_filter_string,0,net_ip);

        pcap_setfilter(pcap_handle,&bpf_filter);
        pcap_loop(pcap_handle,libpcap2_2::number,packet_callback,NULL);

        pcap_close(pcap_handle);
    }
};
