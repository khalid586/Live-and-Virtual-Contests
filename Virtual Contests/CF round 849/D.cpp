#include <bits/stdc++.h>
using namespace std;

// #define int long long int
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
     int n; cin >> n;
     string s; cin >> s;

     int chars[26] = {} , ans = 0;
     rep(i,0,n){
          ++chars[s[i] - 'a'];
     }

     set<int> cnt1;
     rep(i,0,n){
          cnt1.insert(s[i] - 'a');
          --chars[s[i] - 'a'];

          set<int> cnt2;
          rep(i,0,26) if(chars[i]) cnt2.insert(i);
          
          int res = cnt2.size() + cnt1.size();
          ans = max(ans,res);

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