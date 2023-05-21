#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'
void IO()
{
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
      //    freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
#define int long long int
#define all(x) x.begin(),x.end()

// const int N = 1e6;
// int divs[N];


void solve(int t){
     int n; cin >> n;
     int a[n];

     rep(i,0,n) cin >> a[i];

     int ans = 0 , cnt = 0;
     rep(i,0,n){
          if(a[i]) cnt = 0;
          else ++cnt;

          ans = max(ans,cnt);
     }

     cout << ans << '\n';
}
int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     IO();

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     } 
   
   return 0;
}

