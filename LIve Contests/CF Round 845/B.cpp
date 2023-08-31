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


const int N = 1e6 + 1;
vector<string> all;

int ans[N];
int  mod = 1e9 + 7;

void solve(int t){
     int n;
     cin >> n;
     cout << ans[n] << '\n';
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
     cin >> t;

     int fact = 1;
     for (int i = 2; i < 1e5 + 7; ++i)
     {
          fact *= i;
          fact %= mod;
          ans[i] = 2 * fact * (((i * (i-1))/2)%mod) %mod;
     }

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}
