#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<char> > matrix(n, std::vector<char>(m));
		for(int i=0;i<n;i++)
		{ 
			string s;
			cin>>s;
			int k=0;
			for(int j=0;j<m;j++)
			{
				matrix[i][j]=s[k];
				k++;
			}
		}
		int flag=0;
		int stop=0;
		/*
		cout<<"the matrix is:"<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cout<<i<<" "<<j<<" "<<matrix[i][j]<<" ";
			cout<<endl;
		}
		*/
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if((i==n-1 || j==0 ||j==m-1 ) && (matrix[i][j]=='W' ))
				{
    					stop=1;
						//cout<<"here1"<<endl;
						break;
				}
				else
				{
					 if(matrix[i][j]=='A')
				{
					if(i+1<n)
					{
					   if( matrix[i+1][j]=='B' || matrix[i+1][j]=='A' ||  matrix[i+1][j]=='W' )
	                     ;
					   	else
					  {
						stop=1;
						//cout<<"here1"<<endl;
						break;
						
					   }
					}
		            if(i-1>=0)
		            {
		            	if(  matrix[i-1][j]=='A')
		            	;
		            	else
		            	 {
						stop=1;
						//cout<<"here2"<<endl;
						break;
						
					   }
					}
                    if(j+1<m)
                    {
                    	if((matrix[i][j+1]=='B'|| matrix[i][j+1]=='A' ))
                    	;
                    	else
                    	 {
						stop=1;
						//cout<<"here3"<<endl;
						break;
						
					   }
					}
					if(j-1>=0)
					{
					   if( matrix[i][j-1]=='A' ||matrix[i][j-1]=='B' )	
					   ;
					   else
					   {
					     stop=1;
					     //cout<<"here4"<<endl;
						 break;
					     
					   }
					}
				}
				else if(matrix[i][j]=='W')
				{
					
					if(i+1<n)
					{
					    if( ( matrix[i+1][j]=='B' || matrix[i+1][j]=='W') )	
					    ;
					    else
					  {
						stop=1;
						//cout<<"here5"<<endl;
						break;
						
					  }
					}
					
					if(i-1>=0)
					{
					  if(((matrix[i-1][j]=='A' ||  matrix[i-1][j]=='W')))
					  ;
					  else
					  {
						stop=1;
						//cout<<"here6"<<endl;
						break;
						
					  }	
					}
					
					if(j+1<m)
					{
							if((matrix[i][j+1]=='B'|| matrix[i][j+1]=='W' ))
							;
					else
					  {
						stop=1;
						//cout<<"here7"<<endl;
						break;
						
					  }
					}
					if(j-1>=0 )
					{
					   if( (matrix[i][j-1]=='B' ||matrix[i][j-1]=='W'))	
					   ;
					   else
					   {
						stop=1;
						//cout<<"here8"<<endl;
						break;
						
					  }
					}
				}
				 if(matrix[i][j]=='B')
				{
					
					if(i+1<n)
					{
						if( matrix[i+1][j]=='B' )
						;
						//cout<<"ok"<<endl;
				    	else
					   {
						stop=1;
						//cout<<"here9"<<endl;
						break;
						
				    	}
					}
	                if(i-1>=0)
	                {
	                	if( matrix[i-1][j]=='B' ||matrix[i-1][j]=='A' ||matrix[i-1][j]=='W')
	                	;
						//cout<<"ok"<<endl;
	          			else
					   {
					   	//cout<<i<<" "<<j<<endl;
						stop=1;
						//cout<<"here10"<<endl;
						break;
						
					  }
					}
					
				    if(j+1<m)
				    {
				    	if( matrix[i][j+1]=='B' ||matrix[i][j+1]=='W'||matrix[i][j+1]=='A')
				          ;
					//	cout<<"ok"<<endl;
				   		else
					   {
					//   	cout<<i<<" "<<j<<endl;
						stop=1;
						//cout<<"here11"<<endl;
						break;
						
					   }
					}
					
	                if(j-1>=0)
	                {
	                	if( (matrix[i][j-1]=='A' ||matrix[i][j-1]=='W'|| matrix[i][j-1]=='B'))
	                	;
						//cout<<"ok"<<endl;
	                 else
					   {
						stop=1;
						//cout<<"here12"<<endl;
						break;
						
					   }
					}
				}
			}
		}
			if(stop==1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		cout<<"no"<<endl;
		else
		cout<<"yes"<<endl;
		t--;
	}
	return 0;
}
