#include<iostream>
#include<string>
#include<algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        string num;
        std::cin>>num;
        string sort_num=num, max_num=num, min_num=num;

        sort(sort_num.begin(),sort_num.end());

        char f_mx_e, s_mx_e, f_mi_e, s_mi_e;

        f_mx_e=sort_num[sort_num.length()-1];
        s_mx_e=sort_num[sort_num.length()-2];
        f_mi_e=sort_num[0];
        s_mi_e=sort_num[1];

        int f_mx_p=num.find(f_mx_e);
        int s_mx_p=num.find(s_mx_e);
        int f_mi_p=num.find(f_mi_e);
        int s_mi_p=num.find(s_mi_e);

        if(num[1]!='0' && num[0]!=f_mi_e)
            swap(min_num[0],min_num[f_mi_p]);
        if(num[1]!='0' && num[0]==f_mi_e && num[1]!=s_mi_e)
            swap(min_num[1],min_num[s_mi_p]);
        if(num[1]!='0' && num[0]!=f_mi_e && num[1]!=s_mi_e)
            min_num=min_num;

        if(num[0]!=f_mx_e)
            swap(max_num[0],max_num[f_mx_p]);
        if(num[0]==f_mx_e && num[1]!=s_mx_e)
            swap(max_num[1],max_num[s_mx_p]);
        if(num[0]!=f_mx_e && num[1]!=s_mx_e)
            max_num=max_num;

        std::cout<<"Case #"<<i<<": "<<min_num<<" "<<max_num<<endl;
    }

    return 0;
}
