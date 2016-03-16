#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main ()
{
	string s,k;
    std::cin>>s>>k;
    std::vector<string>vector1;
    do
    {
        vector1.push_back(s);

    }while(std::next_permutation(s.begin() , s.end()));

    bool i = find(vector1.begin(),vector1.end(),k);
    if(i == true)
        printf("YES\n");
    else
        printf("NO\n");

  return 0;
}
