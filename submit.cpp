// ###### Sat Mar 28 14:19:29 IST 2020
#include <bits/stdc++.h>  
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define forn(i,a,b)        for( i = a ; i < b  ; i++ )
#define debug(x)           cout << #x << " " << x << " -- \n"
#define I__O               ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define ll                 long long    
#define MOD                998244353
#define pi                 pair<int,int>
#define vi                 vector <int>
#define pb                 push_back
#define vp                 vector <pair<ll,ll>>
#define endl               cout << "\n"  
#define f1                 first 
#define s1                 second    
#define in                 insert
#define all(x)             (x).begin(),(x).end() 
using namespace std ; 
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set ; 
const int N = 2e5+7;
int tests(){ 
  ll i ;
  ll x,y ;
  cin >> x >> y ;
  ll a,b,c ; 
  cin >> a >> b >> c ; 
  vector <ll> p(a),q(b),r(c);
  vector <ll> t ; 
  map <ll,ll> m;
  for(auto &x :p)
    cin >> x ; 
  for(auto &x :q)
    cin >> x;
  for(auto &x :r)
    cin >> x,m[x]++ ;
  sort(all(p));
  sort(all(q)); 
  sort(all(r));
  reverse(all(p));
  reverse(all(q)); 
  
  forn(i,0,x)
    t.pb(p[i]);

  forn(i,0,y)
    t.pb(q[i]);
  sort(all(t));
  // reverse(all(t));  
  forn(i,0,x+y)
    if(!r.empty() && t[i] < r.back()){
      t[i] = r.back();
      r.pop_back() ;
    }  
    ll sum  = 0 ; 
  forn(i,0,x+y)
    sum += (ll)t[i];  
  cout << sum << '\n' ; 
  return 0 ;
} 
int32_t main(){
    I__O ;            
    int cases = 1 ; 
    // cin >> cases ;  
    while(cases--){   
    // cout << "Case #" << cases << ": ";
      tests(); 
    }
    return 0 ; 
}

// -Wall -Wextra -O2
// -pedantic -std=c++11
// -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC