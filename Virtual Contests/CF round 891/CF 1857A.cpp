#include <bits/stdc++.h>
using namespace std;

//Starting in the name of Allah(THE ALMIGHTY)

#define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          //freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}

const int N = 1e6+7;


void solve(int t){
     int n; 
     cin >> n;

     int a[n] , cnt = 0;

     rep(i,0,n) cin >> a[i];
     
     rep(i,0,n)
          if(a[i] % 2) ++cnt;

     cout << (cnt % 2 ? "NO\n":"YES\n");
}

int32_t main()
{
     FastIO();

     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

