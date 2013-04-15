#include <iostream>
#include "include/Firstclass.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gettimewin.h"
#ifdef WIN32
#   include <windows.h>
#else
#   include <sys/time.h>
#endif
int     gettimeofday(struct timeval *tp, void *tzp);
#if defined(_MSC_VER) && !defined(snprintf)
#define  snprintf  _snprintf
#endif

using namespace std;

int main()
{

    struct  timeval start;
    struct  timeval end;
    gettimeofday(&start,0);
    cout << "Hello world!" << endl;
    char* pstring = "Ming Liu is woman, and she is studying in the Arizona University. Sometimes she is a little lazy. But she is very smart.";
    Firstclass Ming(pstring);
    int n = Ming.Findnumstring("she");
    gettimeofday(&end, 0);
    unsigned long diff = 1000000 * (end.tv_sec-start.tv_sec)+ end.tv_usec-start.tv_usec;
    cout<<n<<endl;
    cout<<diff<<endl;




    return 0;
}
