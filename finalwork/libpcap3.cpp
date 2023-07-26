#include<pcap.h>
#include<string>
#include<string.h>
#include<iostream>
#include<ctime>
#include <arpa/inet.h>
#include"libpcap3.h"

using namespace std;

string libpcap3:: net_interface;
string libpcap3::time;
int libpcap3::length;
u_short libpcap3::ethernet_type;
string libpcap3::protocol;
string libpcap3::mac_source;
string libpcap3::mac_des;

struct ether_header{
    u_int8_t ether_dhost[6];
    u_int8_t ether_shost[6];
    u_int16_t ether_type;
};

class libpcap3_cpp{
public:

    static string changeCharToString(unsigned char p)
    {

     string str="";
     str+=p;
     return str;

    }
    void solution()
    {
        char error_content[PCAP_ERRBUF_SIZE];
        pcap_t* pcap_handle;
        const u_char* packet_content;
        u_char* mac_string;
        u_short ethernet_type;
        bpf_u_int32 net_mask;
        bpf_u_int32 net_ip;
        char* net_interface;
        struct pcap_pkthdr protocol_header;
        struct ether_header* ethernet_protocol;
        struct bpf_program bpf_filter;
        char bpf_filter_string[]="ip";

        net_interface=pcap_lookupdev(error_content);

        pcap_lookupnet(net_interface,&net_ip,&net_mask,error_content);

        pcap_handle=pcap_open_live(net_interface,BUFSIZ,1,0,error_content);

        pcap_compile(pcap_handle,&bpf_filter,bpf_filter_string,0,net_ip);

        pcap_setfilter(pcap_handle,&bpf_filter);

        if(pcap_datalink(pcap_handle)!=DLT_EN10MB){
            return;
        }
        packet_content=pcap_next(pcap_handle,&protocol_header);

//        printf("-----------------*****-------------------\n");
//        printf("capture a packet from net_interface:\n");
//        printf("%s\n",net_interface);
//        printf("caputre time is : \n");
//        printf("%s",ctime((const time_t*)&protocol_header.ts.tv_sec));
//        printf("packet length is: \n");
//        printf("%d\n",protocol_header.len);
        ethernet_protocol=(struct ether_header*)packet_content;
//        printf("ethernet type is: \n");
        ethernet_type=ntohs(ethernet_protocol->ether_type);
//        printf("%04x\n",ethernet_type);

        string protocol;
        switch(ethernet_type){
            case 0x0800:
//                printf("the network layer is IP protocol\n");
                protocol="The network layer is IP protocol!";
                break;
            case 0x0806:
//                printf("the network layer is ARP protocol\n");
                protocol="The network layer is ARP protocol!";
                break;
            case 0x8035:
//                printf("the network layer is RARP protocol\n");
                protocol="The network layer is RARP protocol!";
                break;
            default:
                break;
        }

//        printf("mac source address is : \n");
        mac_string=ethernet_protocol->ether_shost;
//        printf("%02x:%02x:%02x:%02x:%02x:%02x\n",*mac_string,*(mac_string+1),*(mac_string+2),*(mac_string+3),*(mac_string+4),*(mac_string+5));
//        cout<<mac_string<<endl;

//        printf("mac destination address is: \n");
        mac_string=ethernet_protocol->ether_dhost;
//        printf("%02x:%02x:%02x:%02x:%02x:%02x\n",*mac_string,*(mac_string+1),*(mac_string+2),*(mac_string+3),*(mac_string+4),*(mac_string+5));
//         cout<<to_string(*mac_string)<<endl;

//        printf("-------------------------*****----------------------\n");

        string mac_source;
        string mac_des;

        for (int i=0;i<6;i++) {
            char temp[6];
            sprintf(temp, "%02x", ethernet_protocol->ether_shost[i]);
            string res=temp;
            mac_source=mac_source+res;
            if(i!=5){
                mac_source=mac_source+":";
            }
        }
        for (int i=0;i<6;i++) {
            char temp[6];
            sprintf(temp, "%02x", ethernet_protocol->ether_dhost[i]);
            string res=temp;
            mac_des=mac_des+res;
            if(i!=5){
                mac_des=mac_des+":";
            }
        }




        libpcap3:: net_interface=net_interface;
        libpcap3::time=ctime((const time_t*)&protocol_header.ts.tv_sec);
        libpcap3::length=protocol_header.len;
        libpcap3::ethernet_type=ethernet_type;
        libpcap3::protocol=protocol;
        libpcap3::mac_source=mac_source;
        libpcap3::mac_des=mac_des;

        pcap_close(pcap_handle);
    }
};
