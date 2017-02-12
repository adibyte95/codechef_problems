#include <stdio.h>

unsigned gcd(unsigned x, unsigned y){
    unsigned wk;
    if(x<y){ wk=x;x=y;y=wk; }
    while(y){
        wk = x%y;
        x=y;
        y=wk;
    }
    return x;
}

int gcd_a(long long int n, long long int a[]){
    if(n==1) return a[0];
    if(n==2) return gcd(a[0], a[1]);
    int h = n / 2;
    return gcd(gcd_a(h, &a[0]), gcd_a(n - h, &a[h]));
}

int main(void){
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		int n;
		scanf("%d",&n);
		long long int A[n];
		for(int i=0;i<n;i++)
		scanf("%lld",&A[i]);
		    int size_A = sizeof(A)/sizeof(*A);
        long long int gcd = gcd_a(size_A, A);
         printf("%lld\n", gcd);
		t--;
	}
    return 0;
}
