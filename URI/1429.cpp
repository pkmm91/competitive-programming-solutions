#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    string acm;
    int fact[5] = {1,2,6,24,120} ;
   while (cin >> acm)
    {
        if (acm == "0")   break;
    else
    {
    int result = 0;
    for (unsigned int i = 0; i <acm.size (); i++)
    {
        result +=  ((acm[i] - '0') * fact[acm.size () - i-1]);
    }
    cout <<result<<endl;
    }
    }
    return 0;
    }
