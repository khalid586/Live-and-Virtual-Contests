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
//----------------------------------------------------debugger-------------------------------------------------------------// |
void _print(ll t) {cerr << t <<",";}
void _print(int t) {cerr << t<<",";}
void _print(string t) {cerr << t<<",";}
void _print(char t) {cerr << t<<",";}
void _print(lld t) {cerr << t<<",";}
void _print(double t) {cerr << t<<",";}
void _print(ull t) {cerr << t<<",";}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}\n";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]\n";}
//----------------------------------------------------debugger-------------------------------------------------------------//|
template<class T>
using indexed_set = tree<T,null_type,less<T>,rb_tree_tag,
tree_order_statistics_node_update>;
// *s.find_by_order returns the value stored at that position
// s.order_of_key returns the position where the value is stored
//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll j = a; j >= b;--j)


//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     khalid
    #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
     // freopen("out.txt", "w", stdout);
     freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE      
}

#define int long long int
void solve(int q){
     int n,m;
     string s,t;

     cin >> n >> m;
     cin >> s >> t;

     bool checkT = 1;
     bool ok = 1;
     bool check[2] = {};

     rep(i,1,n){
          if(s[i] == s[i-1]){ 
               ok = 0;
               check[s[i] - '0'] = 1;
          }
     }

     if(ok){  cout << "YES\n"; return; }

     rep(i,1,m){
          if(t[i] == t[i-1]){
               checkT = 0;
               break;
          }
     }

     if(!checkT){ cout << "NO\n"; return;}

     if(check[0] == 1 and check[1] == 1){ cout << "NO\n"; return;}

     if(check[0] == 1){
          if(t[0] == '1' and t[m-1] == '1')  {  cout << "YES\n"; return; }
          else                               {  cout << "NO\n"; return;}    
     }
     else{
          if(t[0] == '0' and t[m-1] == '0')  {  cout << "YES\n"; return; }
          else                               {  cout << "NO\n"; return;} 
     }
}


int32_t main()
{
     FastIO() ;
     ll test_case=1;
     cin >> test_case;

     rep(i,1,test_case + 1){
          solve(i);
     }
     return 0;
}

