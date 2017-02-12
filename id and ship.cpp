#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t=='b' || t=='B')
		cout<<"BattleShip"<<endl;
		else if(t=='c' ||t=='C')
		cout<<"Cruiser"<<endl;
		else if(t=='d' ||t=='D')
		cout<<"Destroyer"<<endl;
		else if(t=='f' ||t=='F')
		cout<<"Frigate"<<endl;
	}
	
	return 0;
}
