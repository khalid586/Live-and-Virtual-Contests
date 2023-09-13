#include <bits/stdc++.h>
using namespace std;
typedef long long int     ll;

#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll j = a; j >= b;--j) 

// Starting in the name of Allah(THE ALMIGHTY)

void solve(int t) 
{
     int n , even = 0 , odd = 0;
     cin >> n;
     int a[n];
     rep(i,0,n){ cin >> a[i]; if(a[i] % 2) odd += a[i]; else even += a[i];}

     cout << (even > odd ? "YES\n":"NO\n") ;     
}

int32_t main()
{ 
     int t = 1;
     cin >> t;

     rep(i,1,t+1){
           solve(i);
     } 
     return 0;
}

