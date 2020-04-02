// 3/31/2020 6:24:39 PM
#include <bits/stdc++.h>  
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
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
// 2020-04-01
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set ; 
const int N = 2e5+7; 
ll a,b ; 
bool poss(ll x){
  if( b > x)
    return false; 
  if((a/x)&1)
    return x-b == a%x;
  else
    return a%x == b;
}
int32_t tests() {
  ll a,b; 
  cin >>a  >> b ; 
  ll L = 1 ,R = b,mid ;
  ll ans  = -1;
  while(L <= R){
    mid  = L+(R-L)/2;
    if(poss(mid))
    {
      ans  = mid ;
      R = mid-1;
    }
    else
      L = mid+1;
  }
  cout << ans  << '\n' ; 
  // auto f=[&](int u){
  //       for (int i=2;i<=u;++i){
  //           if (u%i==0) return i;
  //       }
  //   };
  return 0;
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

// -Wall -Weptra -O2
// -pedantic -std=c++11
// -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC