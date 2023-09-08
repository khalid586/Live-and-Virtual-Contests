#include <bits/stdc++.h>
using namespace std;


//Starting in the name of Allah(THE ALMIGHTY)

#define int long long int
const int N = 1e6+7;

#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)
#define lcm(a,b)        (a*b)/(__gcd(a,b))

void solve(int t){
     int n,x,y; cin >> n >> x >> y;

     int  mxPos = n/x , minPos = n/y , common = n / (lcm(x,y));

     minPos -= common;
     mxPos -= common;

     int Maxsm = 0 , Minsm = 0;

     Maxsm = (n*(n+1))/2;
     Maxsm -= ((n-mxPos)*((n-mxPos)+1))/2;

     Minsm = -(minPos * (minPos+1))/2;

    // _print(mxPos);
     cout << Maxsm + Minsm << '\n';
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
