#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define rev(i,a,b) for(int i = a ; i >= b ; i--)

#define endl '\n'
void IO()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     #ifndef ONLINE_JUDGE
          freopen( "in.txt" , "r" ,stdin);
      //   freopen("out.txt", "w", stdout);
          freopen("Error.txt","w",stderr);
     #endif // ONLINE_JUDGE
}
#define int long long 

void solve(int t){
     int n , c , res = 0; cin >> n >> c;

     int a[n+1] = {};
     rep(i,1,n+1){ cin >> a[i]; a[i] += i;}

     
     sort(a,a+n+1);
     rep(i,1,n+1){ a[i] += a[i-1];}

     res = upper_bound(a,a+n+1,c) - a; --res;
     cout << res << '\n';
}

int32_t main()
{
     IO();
     int t = 1; 
     cin >> t; 
   
     rep(i,1,t+1) solve(i);

     return 0;
}

