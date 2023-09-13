#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


#define ll              long long 

#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll i = a; i >= b;--i)


//Starting in the name of Allah(THE ALMIGHTY)

#define int long long int
const int N = 1e6+7;

void solve(int t){
     int n; cin >> n;

     int a[n];
     rep(i,0,n) cin >> a[i];

     int neg[n] = {}, pos[n] = {};

     neg[0] = 1; // We will need atleast one operation to make it increasing

     rep(i,1,n)   neg[i] = neg[i-1] + (a[i] >= a[i-1]); // shudu negative value diye multiply korbo
     rev(i,n-2,0) pos[i] = pos[i+1] + (a[i] >= a[i+1]); // shudu positive value diye multiply korbo

     int ans = pos[0]; // shudu positive value diye multiply korle jeta pabo oita ke initial value dhorlam

     rep(i,1,n) ans = min(ans,neg[i-1]+pos[i]); // etar mane hocche i tomo position theke n tomo position porjonto positive value diye multiply ebong i-1 tomo position theke 1st position porjonto negative value diye multiply korle ki hobe seta ber kore compare korbo 

     cout << ans << '\n';
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

