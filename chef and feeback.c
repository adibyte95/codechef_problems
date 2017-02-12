#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	scanf("%d",&t);
		char s[100006];
	int flag;
	while(t>0)
	{
		scanf("%s",&s);
	 flag=0;
		int l=strlen(s);
		for( i=0;i<l-2;i++)
		{
           	if( (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1') || (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'))
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("Good\n");
		else
		printf("Bad\n");
		t--;
	}
	return 0;
}
