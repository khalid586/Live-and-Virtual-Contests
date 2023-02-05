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
     int n;
     cin >> n;

     string s;
     cin >> s;

     int x = 0 , y = 0;
     bool ok = 0;

     for(auto p:s){
          if(p == 'U') ++y;
          else if(p == 'D') --y;
          else if(p == 'L') --x;
          else ++x;

          if(x == 1 and y == 1) ok = 1;
     }

     cout << (ok?"YES\n":"NO\n");
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




