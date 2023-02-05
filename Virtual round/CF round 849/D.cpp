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


const int N = 1e6 + 7;
int  mod = 1e9 + 7;

void solve(int t){ 
     int n; cin >> n;
     string s;
     cin >> s;

     int last_pos[26];
     rep(i,0,26) last_pos[i] = -1;

     rep(i,0,n) last_pos[s[i] - 'a'] = i;
     set<char> check;

     int dist = 0 , ans = 0;
     rep(i,0,n){
          if(!check.count(s[i])) ++dist,check.insert(s[i]);

          set<char> dist2;
          rep(j,0,26) if(last_pos[j] > i) dist2.insert(j);
          int res = dist + dist2.size();

          ans = max(res,ans);
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




