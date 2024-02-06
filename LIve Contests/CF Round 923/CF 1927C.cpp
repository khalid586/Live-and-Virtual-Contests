#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


//Starting in the name of Allah(THE ALMIGHTY)

#define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void FastIO()
{
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r", stdin);
          // freopen("out.txt", "w", stdout);
          // freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}


const int N = 1e6+7;


void solve(int t){
     int n,m,k;
     cin >> n >> m >> k;


     int a[n] , b[m];

     rep(i,0,n){
          cin >> a[i];
     }
     rep(i,0,m){
          cin >> b[i];
     }

     pair<bool,vector<char>> ans[k+1];

     rep(i,1,k+1){
          ans[i].first = 0;
     }

     rep(i,0,n){
          if(a[i] < k+1){
               if(ans[a[i]].first == 0){
                    ans[a[i]].first = 1;
                    ans[a[i]].second.push_back('A');
               } 
          }    
     }
     rep(i,0,m){
          if(b[i] < k+1){
               if(ans[b[i]].second.size() < 2){
                    ans[b[i]].first = 1;
                    ans[b[i]].second.push_back('B');
               }
          }
     }

     bool ok = 1;

     rep(i,1,k+1){
          if(ans[i].first == 0) ok = 0;
     }

     int cntA = 0 , cntB = 0;

     rep(i,1,k+1){
          if(ans[i].first == 1){
               if(ans[i].second[0] == 'A' || ans[i].second[1] == 'A' )
                    ++cntA;
               if(ans[i].second[0] == 'B' || ans[i].second[1] == 'B')
                    ++cntB;
          }
     }

     if(cntB >= k/2 && cntA >= k/2 && ok){
          cout << "YES\n";
     }else{
          cout << "NO\n";
     }
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

