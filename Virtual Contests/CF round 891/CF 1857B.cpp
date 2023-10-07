//Starting in the name of Allah(THE ALMIGHTY)

#include <bits/stdc++.h>
using namespace std;

void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          //freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}

const int N = 1e6+7;

#define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void solve(int t){
     string s;
     cin >> s;

     int n = s.size();
     int carry = 0 , idx = n;

     rev(i,n-1,0){
          if(s[i] + carry >= '5'){
               idx = i;
               carry = 1;
          }
          else{
               if(carry){
                    s[i] += 1;
                    carry = 0;
               }
          }
     }

     rep(i,idx,n) s[i] = '0';
     
     if(carry) s = '1' + s;

     cout << s << '\n';
}

int32_t main()
{
     FastIO();

     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

