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
     int x,y,z,volume;
     cin >> x >> y >> z >> volume;

     int ways = 0;
     rep(i,1,x+1){
          rep(j,1,y+1){
               int rem = volume % (i*j);
               int k = volume / (i*j);
               if(!rem and k <= z){
                    int ans = (x - i + 1) * (y - j + 1) * (z - k + 1) ;
                    ways = max(ways,ans);
               }
          }
     }

     cout << ways << '\n';
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

