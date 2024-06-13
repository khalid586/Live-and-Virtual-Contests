#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


//Starting in the name of Allah(THE ALMIGHTY)

#define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          // freopen("out.txt", "w", stdout);
          // freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}


const int N = 1e6+7;

int x [] = {1,0,-1,0,1,-1,-1,1};
int y [] = {0,1,0,-1,1,-1,1,-1};

int n,m;

bool isValid(int x,int y){
	return x <=n && y <=m && x >=1 && y >= 1;
}

void solve(int test){
     cin >> n >> m;
     int mx = 0;

     char s[n+1][m+1];
     rep(i,1,n+1){
     	rep(j,1,m+1){
     		cin >> s[i][j];
     	}
     }
     pair<int,int> X = {INT_MAX,0} , Y = {INT_MAX,0};

     rep(i,1,n+1){
     	rep(j,1,m+1){
     		if(s[i][j] == '#'){
     			X.first = min(i,X.first);
 				X.second = max(i,X.second);

 				Y.first = min(j,Y.first);
 				Y.second = max(j,Y.second);
     		}

     	}
     }

     int x = ( X.first + X.second) / 2;
     int y = ( Y.first + Y.second) / 2;

     cout << x << ' ' << y << '\n';
}

int32_t main()
{
     FastIO();

     // cout << 14*14 << '\n';

     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

