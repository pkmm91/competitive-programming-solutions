#include<stdio.h>
int main(){
  int arr[50];
  int *p;
  int i,j,k,size,n,m,a,b;
  scanf("%d %d",&n,&m);
  for(i=0;i<(2*m);i++)
    scanf("%d",&arr[i]);
  size=(2*m);
  p=arr;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
         if(i==j){
             continue;
         }
         else if(*(p+i)==*(p+j)){
             k=j;
             size--;
             while(k < size){
                 *(p+k)=*(p+k+1);
                 k++;
              }
              j=0;
          }
      }
  }
    printf("%d",(size-1));
  return 0;
}
