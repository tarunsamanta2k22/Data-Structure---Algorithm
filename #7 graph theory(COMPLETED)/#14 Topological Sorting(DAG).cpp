//coumting the number of articulation points
#include<bits/stdc++.h>
//#define<windows.h>
//prime fctorization  
//#include<ext.pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff    	   		first
#define ss    			second
#define ll      		long long
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
#define inf				1000000000
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
vi arr[100];
vi res;
int in[100];
// Khan algo
void khan(int n)
{
	queue<int>q;
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0)
		{
			q.push(i);
		}
	}
	
	while(!q.empty())
	{
		int curr=q.front();
		
		res.pb(curr);
		
		q.pop();
		
		for(int node: arr[curr])
		{
			in[node]--;
			if(in[node]==0)
			  q.push(node);
		}	
	}
	cout<<"TopSort: ";
	for(int node:res)
	{
		cout<<node<<" ";
	}
}
int main()
{
	//s_t_s();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
	
	int n,m,x,y;
	
	cin>>n>>m;
	
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		
		arr[x].pb(y);
		in[y]++;
	}
	khan(n);
	return 0;
}

