#include<iostream>
#include<cstdio>
using namespace std;
int main()
{    int v,t,x;
while(1)
{
   cin >> v >> t;
   if(cin.eof()) break;
   else
        x = (v*t)*2;
        cout << x << endl;
  }
}
