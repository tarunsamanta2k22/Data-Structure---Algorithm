//Diameter of a Tree or length of the longest path

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
#define vii 			vector<pii>
#define					endl  '\n'
#define mii   			map<int,int>
#define pqb   			priority_queue<int>
#define pqs				priority_queue<int,vi,greater<int> >
#define setbits(x)		__builtin_popcountll(x)
#define zrobits(x)		__builtin_ctzll(x)
#define mod             1000000007
#define INF				1000000000
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
//Count friends



int32_t main()
{
	//s_t_s();
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);       
    
    
    w(t)
    {
    	int N;
    	
    	cin>>N;
    	vector<int>vect(N,1);
    	
    	vector<int>rank(N);
    	
		for(int i=0;i<N;i++)
    	{
    		cin>>rank[i];
		}
		
		//Rise part
		for(int i=1;i<N;i++)
		{
			if(rank[i]>rank[i-1])
			{
				vect[i]=vect[i-1]+1;
			}
			else
			{
				vect[i]=1;
			}
		}
		
		
		//fall part
		
		for(int i=N-2;i>0;i--)
		{
			if(rank[i]>rank[i+1] && vect[i]<=vect[i-1])
			{
				vect[i]=vect[i-1]+1;
			}
		}
		
		int k=accumulate(vect.begin(),vect.end(),0);
		
		cout<<k<<endl;
		/*
		for(auto i:vect)
		{
			cout<<i<<" ";
		}
		*/
	}
	return 0;
}

