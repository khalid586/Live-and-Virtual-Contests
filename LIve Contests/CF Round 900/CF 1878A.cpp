#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


#define ll              long long 
//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll i = a; i >= b;--i)


//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          //freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}

#define int long long int
const int N = 1e6+7;


void solve(int t){
     int n,k; cin >> n >> k;
     bool ok = 0;

     rep(i,0,n){
          int p; cin >> p;

          if(p == k) ok = 1;
     }

     cout << (ok ? "YES\n":"NO\n");
}

int32_t main()
{
     FastIO();

     ll T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

