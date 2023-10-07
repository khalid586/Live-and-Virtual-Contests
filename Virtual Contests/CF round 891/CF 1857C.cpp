#include <bits/stdc++.h>
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

     int m = (n*(n-1))/2;
     int a[m];


     rep(i,0,m){
          cin >> a[i];
     }

     sort(a,a+m);

     for(int i = 0 ; i < m ; i+= --n){
          cout << a[i] << ' ';
     }
     cout << a[m-1] << '\n';
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

