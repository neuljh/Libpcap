#include<pcap.h>
#include<string>
#include<string.h>
#include<iostream>
#include<ctime>
#include <arpa/inet.h>
#include"libpcap4.h"

using namespace std;

int libpcap4::number;
vector<string> libpcap4::ethernet_type;
vector<string> libpcap4::mac_source;
vector<string> libpcap4::mac_des;
vector<unsigned short> libpcap4::hardware_type;
vector<unsigned short> libpcap4::protocol_type;
vector<unsigned char> libpcap4::hardware_length;
vector<unsigned char> libpcap4::protocol_length;
vector<unsigned short> libpcap4::operation_code;
vector<string> libpcap4::protocol;
vector<string> libpcap4::eth_source;
vector<string> libpcap4::ip_source;
vector<string> libpcap4::eth_des;
vector<string> libpcap4::ip_des;
//以太网协议
struct ether_header {
    u_int8_t ether_dhost[6]; //目的以太网地址
    u_int8_t ether_shost[6]; //源以太网地址
    u_int16_t ether_type; //以太网类型
};

//IP地址格式
typedef u_int32_t in_addr_t;
//struct  in_addr
//{
//	in_addr_t s_addr; //存放IP地址
//};

//ARP协议
struct arp_header
{
    u_int16_t arp_hardware_type;
    u_int16_t arp_potocol_type;
    u_int8_t arp_hardware_length;
    u_int8_t arp_protocol_length;
    u_int16_t arp_operation_code;
    u_int8_t arp_source_ethernet_address[6];
    u_int8_t arp_source_ip_address[4];
    u_int8_t arp_destination_ethernet_address[6];
    u_int8_t arp_destination_ip_address[4];
};

class libpcap4_cpp{
public:

    static string get_address(string result,unsigned char s[] ){
        for (int i=0;i<6;i++) {
            char temp[6];
            sprintf(temp, "%02x", s[i]);
            string res=temp;
            result=result+res;
            if(i!=5){
                result=result+":";
            }
        }
        return result;
    }

    //实现ARP协议分析
    static void arp_protocol_packet_callback(u_char* argument,
        const struct pcap_pkthdr* packet_header,
        const u_char* packet_content)
    {
        struct arp_header* arp_protocol;
        u_short protocol_type;
        u_short hardware_type;
        u_short operation_code;
        u_char* mac_string;
        struct in_addr source_ip_address;
        struct in_addr destination_ip_address;
        u_char hardware_length;
        u_char protocol_length;

        printf("ARP Protocol\n");
        arp_protocol = (struct arp_header*)(packet_content + 14);
        hardware_type = ntohs(arp_protocol->arp_hardware_type);
        protocol_type = ntohs(arp_protocol->arp_potocol_type);
        operation_code = ntohs(arp_protocol->arp_operation_code);
        hardware_length = arp_protocol->arp_hardware_length;
        protocol_length = arp_protocol->arp_protocol_length;
        printf("ARP Hardware Type:%d\n", hardware_type);
        printf("ARP Potocol Type:%d\n", protocol_type);
        printf("ARP Hardware Lenght:%d\n", hardware_length);
        printf("ARP Potocol Lenght:%d\n", protocol_length);
        printf("ARP Operation:%d\n", operation_code);
        string protocol;
        switch (operation_code)
        {
        case 1:	printf("ARP Request Protocol\n");protocol="ARP Request Protocol!"; break;
        case 2:	printf("ARP Reply Protocol\n"); protocol="ARP Reply Protocol!";break;
        case 3:	printf("RARP Request Protocol\n"); protocol="RARP Request Protocol!";break;
        case 4:	printf("RARP Reply Protocol\n"); protocol="RARP Reply Protocol!";break;
        default:break;
        }

        printf("Ethernet Source Address is:\n");
        mac_string = arp_protocol->arp_source_ethernet_address;
        printf("%02x:%02x:%02x:%02x:%02x:%02x\n", *mac_string, *(mac_string + 1), *(mac_string + 2), *(mac_string + 3), *(mac_string + 4), *(mac_string + 5));
        memcpy((void*)&source_ip_address, (void*)&arp_protocol->arp_source_ip_address, sizeof(struct in_addr));
        printf("Source IP Address:%s\n", inet_ntoa(source_ip_address));
        printf("Ethernet Destination Address id:\n");
        mac_string = arp_protocol->arp_destination_ethernet_address;
        printf("%02x:%02x:%02x:%02x:%02x:%02x\n", *mac_string, *(mac_string + 1), *(mac_string + 2), *(mac_string + 3), *(mac_string + 4), *(mac_string + 5));
        memcpy((void*)&destination_ip_address, (void*)&arp_protocol->arp_destination_ip_address, sizeof(struct in_addr));
        printf("Destination IP Address:%s\n", inet_ntoa(destination_ip_address));

        string eth_source,eth_des,ip_source,ip_des;

        eth_source=get_address(eth_source,arp_protocol->arp_source_ethernet_address);
        eth_des=get_address(eth_des,arp_protocol->arp_destination_ethernet_address);
        ip_source=inet_ntoa(source_ip_address);
        ip_des=inet_ntoa(destination_ip_address);


        libpcap4::hardware_type.push_back(hardware_type);
        libpcap4::hardware_length.push_back(hardware_length);
        libpcap4::protocol_type.push_back(protocol_type);
        libpcap4::protocol_length.push_back(protocol_length);
        libpcap4::operation_code.push_back(operation_code);
        libpcap4::protocol.push_back(protocol);
        libpcap4::eth_source.push_back(eth_source);
        libpcap4::eth_des.push_back(eth_des);
        libpcap4::ip_source.push_back(ip_source);
        libpcap4::ip_des.push_back(ip_des);
    }

    //回调函数，以太网协议分析
    static void ethernet_protocol_packet_callback(u_char* argument,
        const struct pcap_pkthdr* packet_header,
        const u_char* packet_content)
    {
        u_short ethernet_type;
        struct ether_header* ethernet_protocol;
        u_char* mac_string;
        static int packet_number = 1;
        printf("-------------------------------------\n");
        printf("The %d ARP packet is captured.\n", packet_number);
        printf("Ethernet Protocol");
        ethernet_protocol = (struct ether_header*)packet_content;
        printf("Ethernet type id:\n");
        ethernet_type = ntohs(ethernet_protocol->ether_type);
        printf("%04x\n", ethernet_type);
        switch (ethernet_type)
        {
        case 0x0800:printf("The network layer is IP protocol\n"); break;
        case 0x0806:printf("The network layer is ARP protocol\n"); break;
        case 0x0835:printf("The network layer is RARP	 protocol\n"); break;
        default:break;
        }
        printf("Mac Source Address is: \n");
        mac_string = ethernet_protocol->ether_shost;
        printf("%02x:%02x:%02x:%02x:%02x:%02x\n", *mac_string, *(mac_string + 1), *(mac_string + 2), *(mac_string + 3), *(mac_string + 4), *(mac_string + 5));
        printf("Mac Destination Address is: \n");
        mac_string = ethernet_protocol->ether_dhost;
        printf("%02x:%02x:%02x:%02x:%02x:%02x\n", *mac_string, *(mac_string + 1), *(mac_string + 2), *(mac_string + 3), *(mac_string + 4), *(mac_string + 5));
        switch (ethernet_type)
        {
        case 0x0806:
            //ARP协议，调用分析ARP协议的函数
            arp_protocol_packet_callback(argument, packet_header, packet_content);
            break;
        default:break;
        }
        printf("-------------------------------------\n");
        packet_number++;

        string mac_source,mac_des;

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

        char type_id[100];
        sprintf(type_id,"%04x",ethernet_type);
        string temp=type_id;

        libpcap4::ethernet_type.push_back(temp);
        libpcap4::mac_source.push_back(mac_source);
        libpcap4::mac_des.push_back(mac_des);

    }

    void solution() {
        pcap_t* pcap_handle;//2
        char error_content[PCAP_ERRBUF_SIZE];//1
        char* net_interface;
        struct  bpf_program bpf_filter;//5
        char bpf_filter_string[] = "arp";
        bpf_u_int32 net_mask;//3
        bpf_u_int32 net_ip;//3
        net_interface = pcap_lookupdev(error_content);//6
        pcap_lookupnet(net_interface,//7
            &net_ip,
            &net_mask,
            error_content);
        //获取网络地址和网络掩码
        pcap_handle = pcap_open_live(net_interface, BUFSIZ, 1, 0, error_content);//8
        //打开网络接口
        pcap_compile(pcap_handle, &bpf_filter, bpf_filter_string, 0, net_ip);//9
        pcap_setfilter(pcap_handle, &bpf_filter);
        if (pcap_datalink(pcap_handle) != DLT_EN10MB) return;
        pcap_loop(pcap_handle, libpcap4::number, ethernet_protocol_packet_callback, NULL);//10
        //注册回调函数 循环捕获数据包
        pcap_close(pcap_handle);//关闭
    }
};
