//SUBLIME TEXT
#include<bits/stdc++.h>
//#define<windows.h>

//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define int     		long long
#define pb    			push_back
#define					REP(i,n) for (int i=1;i<=n;i++)
#define mp    			make_pair
#define pii   			pair<int,int>
#define vi	  			vector<int>
#define vii 			vector<ii>
#define					endl  '\n'
#define mii   			map<int,int>
#define pqb   			priority_queue<int>
#define pqs				priority_queue<int,vi,greater<int> >
#define setbits(x)		__builtin_popcountll(x)
#define zrobits(x)		__builtin_ctzll(x)
#define mod             1000000007
#define inf				1e18
#define ps(x,y)			fixed<<setprecision(y)<<x
#define mk(arr,n,type)	type *arr=new type[n];
#define w(x)			int x; cin>>x; while(x--)
const double PI=3.141592653589793238460;
typedef std::complex<double> Complex;
//mt19937					rng(chrono::steady_clock::now().time_since_epoch().count)


/*void s_t_s()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
  #endif
}
*/



int32_t main()
{
	//s_t_s();
    
    map<string,int>m;
    
    m.insert(make_pair("xyz",789));
    m.insert({"abc",123});
    m["pqr"]=456;
    
    for(auto it:m)
    {
    	cout<<it.first<<" "<<it.second<<endl;
	}
	
	cout<<endl;
	
	for(auto it:m)
	{
		cout<<it.first<<" "<<m[it.first]<<endl;
	}
	
	if(m.count('abc')==0)
	{
		cout<<"Not Found"<<endl;
	}
	if(m.find("abc")==m.end())
	{
		cout<<"Not Found"<<endl;
	}
	
	return 0;
}
