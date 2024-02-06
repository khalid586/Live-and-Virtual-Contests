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


void solve(int t){
     int n;
     cin >> n;

     int a[n];
     rep(i,0,n) cin >> a[i];
     int cnt[26] = {};
     string ans;
     // cout << cnt[1] << '\n';

     rep(i,0,n){
          rep(j,0,26){ 
               if(cnt[j] == a[i]){
                    ++cnt[j];
                    ans += ('a' + j);
                    break;
               }
          }
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

