#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

//Starting in the name of Allah(THE ALMIGHTY)
#define ll              long long 
#define int long long int
const int N = 1e6+7;
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll i = a; i >= b;--i)

void solve(int t){
     string a,b; cin >> a >> b;

     int n = a.size();
     vector<int> ones;

     rev(i,n-1,0)   if(a[i] == '1' and b[i] == '1')    ones.push_back(i);
     
     for(auto idx:ones){
          if(a[idx-1] == b[idx-1] and a[idx-1] == '0'){ cout << "YES\n"; return;}
     }

     cout << "NO\n";
}

int32_t main()
{
     ll T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

