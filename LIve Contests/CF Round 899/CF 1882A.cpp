#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


#define ll              long long 
//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll j = a; j >= b;--j)


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
     int n; cin >> n;

     int a[n];
     rep(i,0,n) cin >> a[i];

     int b[n];
     b[0] = 1;

     rep(i,0,n){ 
          if(i) b[i] = b[i-1]+1;
          if(b[i] == a[i]) b[i]++;
     }

     cout << b[n-1] << '\n';
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

