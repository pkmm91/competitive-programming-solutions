#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
string query(string s,int b, char c)
{
    s[b-1] = c;
    //cout<<s;
    return s;
}
string updatestring(string s,int b, int c)
{

}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    string str;
    std::cin>>str;
    while(m--)
    {
        int a,b,c;
        scanf("%d %d %c",&a,&b,&c);
        switch(a)
        {
            case 1:
                     query(str,b,c);
                     cout<<str;
                     break;
            case 2:
                  updatestring(str,b,c);
                   break;

        }
    }
 return 0;
}
