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
     string s; cin >> s;

     set<string> ans;

     rep(i,1,n){
          string curr;
          curr += s[i-1]; curr += s[i];
          ans.insert(curr);
     }

     cout << ans.size() << '\n';
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

