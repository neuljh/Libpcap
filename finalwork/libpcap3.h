#ifndef LIBPCAP3_H
#define LIBPCAP3_H

#endif // LIBPCAP3_H

#include<string>
using namespace std;

class libpcap3
{
public:
    libpcap3() {}
    static string net_interface;
    static string time;
    static int length;
    static u_short ethernet_type;
    static string protocol;
    static string mac_source;
    static string mac_des;
};
