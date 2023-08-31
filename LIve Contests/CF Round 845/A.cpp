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
const int N = 1e6 + 1;
vector<string> all;

void solve(int t){
     int n;
     cin >> n;

     int a[n],mx = 0 , cnt = 0;
     rep(i,0,n) cin >> a[i];

     rep(i,1,n){
          if((a[i] % 2) == (a[i-1] % 2)) ++cnt;
     }

     cout << cnt << "\n";
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
