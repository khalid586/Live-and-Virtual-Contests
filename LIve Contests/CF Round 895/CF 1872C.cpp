#include <bits/stdc++.h>
using namespace std;

#define int long long int
//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

const int N = 1e6+7;

pair<int,int> prime(int n){
     if(n == 1) return {0,0};

     for(int i = 2 ; i*i <= n; i++) 
          if(!(n%i)) return {i,n/i};

     return {0,0};
}

void solve(int t){
     int a,b; cin >> a >> b;

     rep(i,a,b+1){
          pair<int,int> res = prime(i);
          
          int d = res.first , q = res.second;

          if(d != 0 and q != 0){
               cout << q << ' ' << (d-1)*q << '\n'; return;
          }
     }

     cout << -1 << '\n';
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
