#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void IO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}

void solve(int t){ 
     int n;    cin >> n;
     string s; cin >> s;

     int ans = n;
     rep(i,0,n/2){
          if((s[i] == '1' and s[n-i-1] == '0') or (s[i] == '0' and s[n-i-1] == '1')) ans -= 2;
          else break;
     }

     cout << ans << '\n';
}
int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




