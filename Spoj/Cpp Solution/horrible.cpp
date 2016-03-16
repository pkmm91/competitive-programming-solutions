#include <iostream>
using namespace std;
typedef long long ll;
#define MAX 262145
ll n,c;
struct tree{
ll add;
ll total;
}t[MAX];
void update(ll node,ll left,ll right,ll i,ll j,ll v){
if(left > j || right < i) return;
   if(left >= i && right <= j){
    if(left !=right){
        ll l = node<<1, r = l+1;
        t[l].add +=v;
        t[r].add +=v;
    }
    t[node].total += (right-left+1);
    return;

   }
   ll mid = (left + right)>>1,l = node<<1 ,r = l+1;
   update(l,left,mid,i,j,v);
   update(r,mid+1,right,i,j,v);
   t[node].total += v*(min(right, j)-max(left,i)+1);
}
ll query(ll node,ll left,ll right,ll i,ll j){
if(left > j || right < i) return 0;
  if(t[node].add > 0){
    if(left != right){
        ll l = node<<1,r = l+1;
        t[l].add +=t[node].add;
        t[r].add +=t[node].add;
    }
    t[node].total +=t[node].add*(right-left+1);
    t[node].add =0;
  }
if(left >= i && right <= j) return t[node].total;
ll mid = (right +left)>>1 ,l = node<<1,r = l+1;
ll ret = 0;
ret +=query(l,left,mid,i,j);
ret +=query(r,mid+1,right,i,j);
return ret;
}
int main()
{
    ll test;
    cin>> test;
    while(test--)
    {
        cin>> n>> c;
        for(ll i=0;i<MAX;i++){
            t[i].total = t[i].add = 0;
        }

         while(c--){
            ll q,a,b,k;
            cin>> q>> a>> b;
            switch(q){
            case 0: cin>> k;
                    update(1,1,MAX/2,a,b,k);
                    break;
            case 1: cout<< query(1,1,MAX/2,a,b)<<endl;
            break;
            }

         }
    }

 return 0;
}
