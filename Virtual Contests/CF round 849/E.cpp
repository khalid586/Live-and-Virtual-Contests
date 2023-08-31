#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void IO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}

void solve(int t){ 
     int n;
     cin >> n;

     int a[n],sm = 0 , mn = INT_MAX , neg = 0;
     rep(i,0,n){ 
          cin >> a[i];
          sm += abs(a[i]);
          mn = min(mn,abs(a[i]));

          if(a[i] < 0) neg++ ;
     }

     if(neg % 2) sm -= 2*mn;

     cout << sm << '\n';

}
int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




