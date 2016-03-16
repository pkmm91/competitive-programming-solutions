#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int num,hour;
float price,result = 0.0;
while(1)
{
cin>>num;
cin>>hour;
cin>>price;
if(cin.eof()) break;
else
{
result = (hour * price);
printf("NUMBER = %d\n",num);
printf("SALARY = U$ %0.2f\n",result);
}
}
    return 0;
}
