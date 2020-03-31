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
vector <vector <int>> adj(N);
int tests(){ 
  // 3/30/2020 6:49:44 PM
  // We will use codeforces api and download a JSON file
  int n ;
  int ans = 0 ;
  cin >> n; 
  ll i,j; 
  string s[n];
  vector <int> v(32,0);
  forn(i,0,n){ 
      cin >> s[i];
      int num = 0 ; 
      for(char c : s[i])
        switch(c){
          case 'a' :  num |= (1<<0);
                      break ;

          case 'i' :  num |= (1<<1);
                      break ;
        
          case 'e' :  num |= (1<<2);
                      break ;
        
          case 'o' :  num |= (1<<3);
                      break ;
                    
          case 'u' :  num |= (1<<4);
        }
      v[num] += 1 ;
  } 
  forn(i,0,32)  
    forn(j,0,32)
        if( ( num < 31 || j < 31) && (num|j) == 31)
          ans += (ll)v[j];
        
  ans += (ll)(v[31]*(v[31]-1));
  ans  >>= 1 ; 
  cout << ans << '\n';
  return 0 ;
} 
int32_t main(){
    I__O ;            
    int cases = 1 ; 
    cin >> cases ;  
    while(cases--){   
    // cout << "Case #" << cases << ": ";
      tests(); 
    }
    return 0 ; 
}

// -Wall -Wextra -O2
// -pedantic -std=c++11
// -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC