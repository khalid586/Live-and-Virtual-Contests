#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


#define ll              long long 
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
#define asc_sort(v)     sort(v.begin(), v.end())
#define dsc_sort(v)     sort(v.rbegin(), v.rend())
#define sum(v)          accumulate(v.begin(),v.end(),0ll)
#define lld             long double
#define ull             unsigned long long
#define all(s)          s.begin(),s.end()
#define endl            '\n'
#define lcm(a,b)        (a*b)/(__gcd(a,b))
#define lcm3(a,b,c)     (lcm(a,b)*c)/(__gcd(c,lcm(a,b)))

#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll j = a; j >= b;--j)


//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     khalid
    #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
     //freopen("out.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE      
}

#define int long long int
const int N = 1e6+7;

void solve(int t){
     int n;
     cin >> n;

     map<int,int> m;

     rep(i,0,n){
          int p;
          cin >> p;
          m[p]++;
     }

  //   for(auto x:m) cout << x.first << ' ';
     if(m.size() > 2){ cout << "No\n"; return;}

     vector<int> a;

     for(auto x:m) a.push_back(x.second);

     if(a.size() > 1)
          if(abs(a[0] - a[1]) > 1){ cout << "No\n"; return;}
     
     cout << "YES\n";
}

int32_t main()
{
     FastIO();

     ll T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

