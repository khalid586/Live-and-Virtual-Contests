#include <bits/stdc++.h>
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

#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll j = a; j >= b;--j)


//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     khalid
    #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
     //freopen("out.txt", "w", stdout);
   // freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE      
}

#define int long long int

void solve(int t){

     int n;
     cin >> n;

     string s;
     cin >> s;


     if(n%2){ cout << "-1\n"; return;}

     bool ok = 1;
     vector<int> res;

     rep(i,0,s.size()/2){
          if(res.size() > 200){break;}
          if(s[i] == s[s.size()-i-1]){
               if(s[i] == '0'){
                    s.insert(s.size()-i,"01");
                    res.push_back(s.size()-i-2);
               }
               else{
                    s.insert(i,"01");
                    res.push_back(i);
               }
          }
     }

     rep(i,0,s.size()/2){
          if(s[i] == s[s.size()-i-1]){
               ok = 0;
               break;
          }
     }

   //  cout << s << '\n';
     if(ok){
          cout << res.size() << '\n';
          for(auto x:res) cout << x << ' '; cout << '\n';
     }
     else{
          cout << "-1\n";
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

