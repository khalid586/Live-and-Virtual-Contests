#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

//Starting in the name of Allah(THE ALMIGHTY)
#define ll long long 

#define int long long int
const int N = 1e6+7;
#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll j = a; j >= b;--j)


void solve(int t){
     string s; cin >> s;

     rep(i,0,9){
          if(s[i] == '1'){ cout << "13\n"; return;}
          else if(s[i] == '3'){ cout << "31\n"; return;}
     }
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

