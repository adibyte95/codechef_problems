#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
    #define gc getchar
#else
    #define gc getchar_unlocked
#endif
int main()
{
	 #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
    #endif
 
	long long int t;
	cin>>t;
		long long int n;
	while(t>0)
	{
		cin>>n;
			long long int p=((n+1)*(n+2))/2;
			p--;
			cout<<p<<endl;
		t--;
	}
	#ifndef ONLINE_JUDGE
        fprintf(stderr,"Completed in %.0f msec\n",(double)(clock()-tStart));
    #endif

	return 0;
}
