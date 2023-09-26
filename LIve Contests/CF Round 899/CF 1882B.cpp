#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int j = a; j >= b;--j)


//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          //freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}
const int N = 1e6+7;

void solve(int t){
     int n; cin >> n;

     vector<int> a[n];
     set<int> res;
     int check[51] = {};

     rep(i,0,n){
          int k; cin >> k;

          rep(j,0,k){
               int p; cin >> p;
               a[i].push_back(p);
               res.insert(p);
               check[p]++;
          }
     }

     int  tot = res.size();
     int mx = 0;

     rep(i,0,51){
          if(check[i]){
               int curr_elementment = i;
               set<int> curr_set;

               rep(set,0,n){

                    bool ok = 1;
                    for(int element:a[set]){ 
                         if(element == curr_elementment) ok = 0;

                    }
                    if(ok) {
                         for(int element:a[set]) curr_set.insert(element);

                    }
               }
               int res = curr_set.size(); 
               mx = max(mx,res);
          }
     }

     cout << mx << '\n';

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

