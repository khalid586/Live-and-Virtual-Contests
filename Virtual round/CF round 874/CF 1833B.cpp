#include <bits/stdc++.h>
using namespace std;

#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(int i = a; i <  b;++i)


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

// #define int long long int
/*void solve(int t){ // solution using map [AC]
     int n , k; 
     cin >> n >> k;

     int a[n];
     vector<int> sortedA(n),b(n);

     rep(i,0,n){
          cin >> a[i];
          sortedA[i] = a[i];
     }

     rep(i,0,n){
          cin >> b[i];
     }

     sort(all(b));

     sort(all(sortedA));
     map<int,vector<int>> m;

     rep(i,0,n) m[sortedA[i]].push_back(b[i]);

     rep(i,0,n){
          cout << m[a[i]][0] << ' ';
          m[a[i]].erase(m[a[i]].begin());
     }
     cout << '\n';

}
*/

void solve(int t){ // faster and less memory used
     int n , k; cin >> n >> k;

     pair<int,int> a[n]; int  b[n] , ans[n];

     rep(i,0,n){
          cin >> a[i].first;
          a[i].second = i;
     }

     rep(i,0,n) cin >> b[i];
     sort(a,a+n); sort(b,b+n);

     rep(i,0,n){
          ans[a[i].second] = b[i]; 
     }

     rep(i,0,n) cout << ans[i] << ' '; cout << '\n';
}

int32_t main()
{
     FastIO() ;
     int test_case=1;
     cin >> test_case;

     rep(i,1,test_case + 1){
          solve(i);
     }
     return 0;
}
