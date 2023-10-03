#include <bits/stdc++.h>
using namespace std;

//Starting in the name of Allah(THE ALMIGHTY)

#define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)


const int N = 1e6+7;


void solve(int t){
     int m;
     cin >> m;

     int b[m];
     rep(i,0,m) cin >> b[i];

     vector<int> a;
     rep(i,0,m){
          if(i == 0 or b[i] != a.back()) a.push_back(b[i]);
     }

     int n = a.size();
     int cnt = 0;
     
     rep(i,0,n){
          if(i == 0) {if(a[i] < a[i+1] or n == 1) ++cnt;}
          else if(i == n-1){ if(a[i] < a[i-1]) ++cnt;}

          else if(a[i] < a[i-1] and a[i] < a[i+1]) ++cnt;
     }

      cout << (cnt == 1? "YES\n":"NO\n");
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

