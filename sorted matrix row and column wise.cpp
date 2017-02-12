//a matrix is sorted in row and column in sorted oder find wheather a number is present or not
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[4][4];
   for(int i=0; i<4; i++)
   {
   	 for(int j=0;j<4;j++)
   	 {
   	 	cin>>a[i][j];
		}
	  }	
	cout<<"matrix is"<<endl;
    
    int left =0;
    int right=3;
    int top =0;
    int bottom=3;
	 for(int i=0; i<4; i++)
   {
   	 for(int j=0;j<4;j++)
   	 {
   	 	cout<<a[i][j]<<" ";
		}
		cout<<endl;
	  }	
	  	
	  	int  n;
	  	cout<<" enter the number";
	  	cout<<endl;
	  	cin>>n;
	  	int flag=0;
	  	//start searching
	  	while(left <= right && bottom>=top)
	  	{
	  		
	  	   if(a[top][left]  == n)
	  	    { 
	  	      cout<<"number found"<<endl;
	  	      flag==1;
	  	      break;
			}
			 
			 else if(a[top+1][left] < n && a[top][left+1] <n)
			 {
			 	left++;
			 	if(left == right)
			 		for(int i=0; i<4;i++)
			 		{
			 			if(a[i][left] == n)
			 			cout<<"number found";
			 			flag==1;
					 }
			 }
			 else if(a[top][left] <n && a[top][left+1] >n)
			 {
			 	top++;
			 	for(int i=0;i<4; i++)
			 	{
			 		if(a[top][i] == n)
			 		{
			 			cout<<"number found";
			 			flag=1;
					 }
				 }
			 }
		  }
		  if(flag ==0)
		  cout<<"nnumber not found";
	return 0;
}
