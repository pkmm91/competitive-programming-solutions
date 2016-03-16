#include<stdio.h>

struct inter
{
    int st;
    int end;
};
struct inter s[100];
int top=-1;
void push(struct inter a)
{
    s[  top]=a;
}
struct inter pop()
{
    return
struct inter top()
{
    return s[top];
}
}
void swap(struct inter a[],int i,int j)
{
    struct inter t=a[i];
    a[i]=a[j];
    a[j]=t;
}
sort(struct inter a[],int n)
{
    int flag=0,index,i,j,min;
    for(i=0;i<n;i  )
    {
        flag=0;
        min=a[i].st;
        for(j=i;j<n;j  )
        {
            if(min>a[j].st)
            {
                flag=1;
                min=a[j].st;
                index=j;
            }

        }
        if(flag)
        swap(a,i,index);
    }

    for(i=0;i<n;i  )
    printf("%d  %d\n",a[i].st,a[i].end);

}
void merge(struct inter a[],int n)
{
    int i,k,count=0;
    struct inter temp;
    sort(a,n);
    push(a[0]);
    for(i=1;i<n;i  )
    {
        struct inter t=top();
        if(a[i].st<=t.end)
        {
           if(t.end<a[i].end)
           {
               t.end=a[i].end;
           }
           pop();
           push(t);
        }
        else
        {
            push(a[i]);
        }
    }
    printf("the intervals are :");
    k=top;
    for(i=0;i<=k;i++)
    {
        temp=pop();
        printf("[ %d,%d] %d\t",temp.st,temp.end,k);
    }
    return;
}
int main()
{
    int i,j,k,n,m;
    struct inter a[100];
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i  )

    {
        scanf("(%d,%d)",&a[i].st         ,&a[i].end);
        fflush(stdin);
    }
        merge(a,n);
    return 0;
}









