#include "../include/Firstclass.h"

Firstclass::Firstclass()
{
    //ctor
}
/*dd another construct function 2013Äê4ÔÂ14ÈÕ14:49:28*/
Firstclass::Firstclass(char* strIni)
{
    str = strIni;
}

int Firstclass::Findnumstring(char* strsub)
{
    int count = 0;
    char* s1;
    char* s2;
    while(*str != '\0')
    {
        s1 = str;
        s2 = strsub;
        while((*s1 == *s2)&&(*s2 != '\0')&&(*s2 != '\0'))
        {
            s1++;
            s2++;
        }
        if(*s2 == '\0')
        {
            count++;
        }
        str++;
    }
    return count;
}

Firstclass::~Firstclass()
{
    //dtor
}
