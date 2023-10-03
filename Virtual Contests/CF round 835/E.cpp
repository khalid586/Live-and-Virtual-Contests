#include <bits/stdc++.h>
using namespace std;

//Starting in the name of Allah(THE ALMIGHTY)

#define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)


const int N = 1e6+7;


void solve(int t){
     int n;
     cin >> n;

     int a[n+1] = {};
     rep(i,1,n+1) cin >> a[i];

     int one[n+1] = {}, zero[n+1] = {};

     rep(i,1,n+1) 
          one[i] = one[i-1] + (a[i] == 1);

     
     if(a[n] == 0) zero[n] = 1;
     
     rev(i,n-1,1) 
          zero[i] = zero[i+1] + (a[i] == 0);

     int curr = 0;

     rep(i,1,n)
          if(a[i]) curr += zero[i+1];
     
     int mx = 0;

     rep(i,1,n+1){
          int change;

          if(a[i]){
               int before = 0; 
               if(i < n) before = zero[i+1];
               int after  = one[i-1];
               
               change = after - before;          
          }
          else{
               int before = one[i-1];
               int after  = 0;

               if(i < n) after = zero[i+1];

               change = after - before;
          }

          mx = max(mx,change);
     }

     cout << curr + mx << '\n';
}

int32_t main()
{
     int T = 1;
     cin >> T;

     rep(i,1,T+1){
          solve(i);
     }
     return 0;
}

