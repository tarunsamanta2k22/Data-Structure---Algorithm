//Bishu & his girlfriend

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



int visited[10001];
int col[10001];
vi arr[10001];

bool dfs(int v,int c)
{
	visited[v]=1;
	col[v]=c;
	
	for(int child : arr[v])
	{
		if(visited[child]==0)
		{
			if(dfs(child,c^1)==false)
			  return false;
			
		}
		else
		{
			if(col[v]==col[child])
			
				return false;
			
		}
	}
	return true;
}

int main()
{
	//s_t_s();
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int m,n,a,b;
     cin>>n>>m;
     
     memset(visited,0,sizeof(visited));
     
     memset(col,0,sizeof(col));
     
     for(int i=1;i<=m;i++)
     {
     	cin>>a>>b;
     	arr[a].pb(b);
     	arr[b].pb(a);
	 }
	 
	if(dfs(1,1)==true)
    {
    	cout<<"The given graph is bipartite\n";
	}
	else
	   cout<<"The given graph is not bipartite\n";
	return 0;
}

