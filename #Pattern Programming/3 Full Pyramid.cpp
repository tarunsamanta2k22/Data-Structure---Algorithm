#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
		    for(int k=1;k<=n-i;k++)
		      cout<<" ";
		    for(int j=1;j<=i;j++)
		       cout<<"* ";
		    for(int k=1;k<=n-i;k++)
		      cout<<" ";
		    cout<<endl;
		    
		}
		
	}
	return 0;
}
