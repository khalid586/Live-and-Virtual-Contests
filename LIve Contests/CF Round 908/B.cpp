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
          //freopen("out.txt", "w", stdout);
          freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE      
}


const int N = 1e6+7;


void solve(int t){
     int n;
     cin >> n;

     bool two = 0 , three = 0 , allDone = 0;
     set<int> cnt;
     vector<int> ans;
     int track[101] = {};

     rep(i,0,n){
          int x;
          cin >> x;

          if(cnt.count(x) == 0 or allDone or track[x]) cnt.insert(x) , ans.push_back(1);
          else if(!allDone and !track[x]){
               if(!two){
                    two = 1;
                    ans.push_back(2);

               }
               else{
                    allDone = 1;
                    ans.push_back(3);
               }
               ++track[x];
          }

     }   

     if(!allDone) { cout << "-1\n"; return;}

     for(auto x:ans) cout << x << ' ';
     cout << '\n';
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

