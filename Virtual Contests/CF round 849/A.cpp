#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)

void solve(int t){
     string s = "codeforces";
     char ch ;
     cin >> ch;

     bool ok = 0;
     for(auto x:s){
          if(x == ch) ok = 1;
     }

     cout << (ok ? "YES\n":"NO\n");
}

int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}