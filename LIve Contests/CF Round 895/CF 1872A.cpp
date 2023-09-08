#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e6+7;

#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

//Starting in the name of Allah(THE ALMIGHTY)

void solve(int t){
     int a,b,c; cin >> a >> b >> c;

     int diff = abs(a-b) / c + (abs(a-b) % c != 0);

     diff = diff/2 + (diff%2);

     cout << diff << '\n';
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
