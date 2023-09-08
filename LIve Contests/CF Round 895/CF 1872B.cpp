#include <bits/stdc++.h>
using namespace std;

//Starting in the name of Allah(THE ALMIGHTY)

#define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)


const int N = 1e6+7;



void solve(int t){
     int n; cin >> n;

     int res = INT_MAX;
     rep(i,0,n){
          int a,b;
          cin >> a >> b;

          int curr = a + (b-1)/2;
          res = min(res,curr);
     }

     cout << res << '\n';
}

int32_t main()
{

     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}
