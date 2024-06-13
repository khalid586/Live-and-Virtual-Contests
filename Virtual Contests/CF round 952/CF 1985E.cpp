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

void solve(int test){
     int x,y,z,K;
     cin >> x >> y >> z >> K;

     int ways = 0;
     rep(i,1,x+1){
          rep(j,1,y+1){
               int rem = K % (i*j);
               int div = K/(i*j);
               if(!rem and div <= z){
                    int ans = (x - i + 1) * (y - j + 1) * (z - div + 1) ;
                    ways = max(ways,ans);
               }
          }
     }

     cout << ways << '\n';
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

