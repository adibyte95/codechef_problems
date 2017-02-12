/**
All submissions for this problem are available.

In a company an emplopyee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary. 
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the Employee's salary is input, write a program to find his gross salary.



NOTE: Gross Salary = Basic Salary+HRA+DA 



Input

The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer salary.

Output

Output the gross salary of the employee.

Constraints

1 = T = 1000
1 = salary = 100000
Example

Input

3 
1203
10042
1312

Output

2406
20383.2
2624
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int q=0;q<t;q++)
	{
		int basic;
	  cin>>basic;
	  if(basic<1500)
	  cout<<basic+(.1*basic)+(.9*basic)<<endl;
	  else
	  cout<<basic+500+.98*basic<<endl;
	}
	
return 0;	
}

