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
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set ; 
const int N = 2e5+7;  
int tests() { 
  int k,t,i ;
  cin >> k  ;
  if(!k){
    cout << 1 <<' ' << 1 << '\n' << 2020 << '\n';
    return 0 ;
  }
  t = k ;
  int c = 0 ;
  while(t){
    t >>= 1 ;
    c++ ;
  }   
  int best= 0 ;
  forn(i,0,c)
    best |= (1<<i);
  int big = best;
  int opp = best-k;
  opp |= (1<<(c));
  int also = 0 ;
  also |= (1<<(c));
  big <<= 1;
  big |= 1 ;
  cout << 2 << ' ' << 3 << '\n' ;
  cout << big << ' ' << best<< ' ' << opp << '\n';
  cout << also << ' ' << big << ' ' << best << '\n';
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