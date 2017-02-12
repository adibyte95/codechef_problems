#include<stdio.h>
#include<string.h>
int main()
{
char a[100006];
int f,t,l,i;
scanf("%d\n",&t);
while(t--)
{
f=0;
gets(a);
//scanf("%s\n",a);
l=strlen(a);
for(i=0;i<l-2;i++)
{
if((a[i]=='1'&&a[i+1]=='0'&&a[i+2]=='1')||(a[i]=='0'&&a[i+1]=='1'&&a[i+2]=='0'))
{f=1;
break;
}
}
if(f==1)
printf("Good\n");
else
printf("Bad\n");
}
}  
