#include<pcap.h>
#include<string>
#include<iostream>
#include<ctime>
#include <arpa/inet.h>
#include"libpcap1.h"

using namespace std;

char* libpcap1::net_interface;
char* libpcap1::net_ip_string;
char* libpcap1::net_mask_string;

class libpcap1_cpp{
public:
    typedef u_int32_t in_addr_t;

    void get_ip_address(){
        char* interface;
        char* ip;

        char error_content[PCAP_ERRBUF_SIZE];//1
        struct in_addr net_ip_address;//4

        u_int32_t net_ip;//3
        u_int32_t net_mask;//3
        libpcap1::net_interface=pcap_lookupdev(error_content);
        pcap_lookupnet(libpcap1::net_interface,&net_ip,&net_mask,error_content);
        interface=libpcap1::net_interface;

        net_ip_address.s_addr=net_ip;
        libpcap1::net_ip_string=inet_ntoa(net_ip_address);
        ip=libpcap1::net_ip_string;
    }

    void get_mask_address(){
        char* interface;
        char* mask;
        char error_content[PCAP_ERRBUF_SIZE];//1

        struct in_addr net_mask_address;
        u_int32_t net_ip;//3
        u_int32_t net_mask;//3
        libpcap1::net_interface=pcap_lookupdev(error_content);
        pcap_lookupnet(libpcap1::net_interface,&net_ip,&net_mask,error_content);
        interface=libpcap1::net_interface;

        net_mask_address.s_addr=net_mask;
        libpcap1::net_mask_string=inet_ntoa(net_mask_address);
        mask=libpcap1::net_mask_string;
    }
};
