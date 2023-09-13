#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long int     ll;
typedef vector<ll>      vll ;
#define in(x)           cin>>x;
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
#define out(x)          cout<<x<<"\n";
#define out2(x)         cout<<x;
#define newline         cout<<"\n";
#define pb              push_back
#define asc_sort(v)     sort(v.begin(), v.end())
#define dsc_sort(v)     sort(v.rbegin(), v.rend())
#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll j = a; j >= b;--j)   
#define sum(v)          accumulate(v.begin(),v.end(),0ll)
#define lld             long double
#define ull             unsigned long long 
#define all(s)          s.begin(),s.end()
#define endl            "\n"
#define lcm(a,b)        (a*b)/(__gcd(a,b))
#define lcm3(a,b,c)     (lcm(a,b)*c)/(__gcd(c,lcm(a,b)))


void solve(int t){
     int n; cin >> n;
     string s; cin >> s;
     vector<int> pos[26];

     rep(i,0,n){
          pos[s[i] - 'a'].push_back(i);
     }

     bool ok = 1;
     rep(i,0,26){

          rep(j,1,pos[i].size())
               if(abs(pos[i][j] - pos[i][j-1]) % 2){
                    ok = 0; break;
               }
     }

     cout << (ok ? "YES\n":"NO\n");
}

int32_t main()
{ 
     int t = 1;
     in(t) 
     rep(i,1,t+1){
           solve(i);
     } 
     return 0;
}

