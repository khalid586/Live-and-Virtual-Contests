#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)


//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          //freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}
const int N = 1e6+7;
#define int long long int

void solve(int t){
     int n; 
     cin >> n;

     int a[n+1];
     rep(i,1,n+1) cin >> a[i];

     
     int ans = 0 , sm = 0;

     rev(i,n,1){
          if(i % 2)      ans = max(ans,sm+a[i]);
          if(i % 2 == 0) ans = max(ans,sm); // if there is any even position(i >= 2) available then we won't have to bear the negative value

          if(a[i] > 0) sm += a[i];
     }

     cout << ans << '\n';
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

