#include <stdio.h>
#include <string.h>
int main()
{
int n;
scanf("%d",&no);
while(n--)
{
int key;
scanf("%d",&key);
if(getchar() && key <=51 && key >=0)
{
char arr[100001];
scanf("%s",arr);
int i=0;
while(arr[i]!='')
{
if(arr[i]=='.')
printf(“%c”,' ');
else if(key < 26)
{
char ch;
if(arr[i]>=65 && arr[i]<=90)
{
ch = arr[i] – 65;
ch+=key;
ch=ch%26;
ch+=65;
}
else
{
ch = arr[i] – 97;
ch+=key;
ch=ch%26;
ch+=97;
}
printf("%c",(char)ch);
}
else
{ char ch;
if(arr[i]>=65 && arr[i]<=90)
{
ch = arr[i] – 65;
ch+=key;
ch=ch%26;
ch+=97;
}
else
{
ch = arr[i] – 97;
ch+=key;
ch=ch%26;
ch+=65;

}
printf("%c",(char)ch);

}
i++;

}
printf("\n");
}
}
return 0;

}
