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
     bool done[n] = {};

     rev(i,n-1,0){
          if(s[i] >= '5'){
               if(i){
                    int curr = s[i-1] - '0';
                    ++curr;
                    char ch = curr + '0';

                    s[i-1] = ch;
                    
                    if(!done[i]){
                         rep(j,i,n){   
                              if(done[j]) break;                  
                              s[j] = '0',done[j] = 1;
                         }
                    }
               }  
               else{
                    if(!done[i]){
                         rep(j,i,n){   
                              if(done[j]) break;                  
                              s[j] = '0',done[j] = 1;
                         }
                    }

                    s = '1' + s;
               }   
          }
        
     }

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

