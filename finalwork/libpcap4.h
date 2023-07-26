#ifndef LIBPCAP4_H
#define LIBPCAP4_H

#endif // LIBPCAP4_H
#include<string>
#include<vector>
using namespace std;

class libpcap4{
public:
    static int number;
    static vector<string> ethernet_type;
    static vector<string> mac_source;
    static vector<string> mac_des;
    static vector<unsigned short> hardware_type;
    static vector<unsigned short> protocol_type;
    static vector<unsigned char> hardware_length;
    static vector<unsigned char> protocol_length;
    static vector<unsigned short> operation_code;
    static vector<string> protocol;
    static vector<string> eth_source;
    static vector<string> ip_source;
    static vector<string> eth_des;
    static vector<string> ip_des;
};
