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

     string s;
     cin >> s;

     int fst = 0 , lst = 0;

     rep(i,0,n){
          if(s[i] == 'B') {
               fst = i;
               break;
          }
     }
     rev(i,n-1,0){
          if(s[i] == 'B') {
               lst = i;
               break;
          }
     }

     int ans = lst - fst + 1;

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

