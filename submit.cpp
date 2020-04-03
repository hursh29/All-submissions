// 4/3/2020 1:53:12 AM
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
// 2020-04-01
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set ; 
const int N = 2e5+7;   
int days[N],req[N],n,m;
bool poss(int day){
  int c = 0 ;
  bool ok = true ; 
  vector <bool> done(day+1,false),fine(m+1,false);
  for(int i = day ;i > 0 ; i--)
    if(!fine[days[i]] && days[i])
      done[i] = fine[days[i]] =  true;
  int extra = 0,prev= 0 ;
 
  for( int i = 1 ;i <= day ; i++ )
    if(done[i]) 
      {

        int total = extra+i-1-prev;
        if(req[days[i]] > total)
          return false ;
        extra += total-req[days[i]];
        prev = i ;
      } 
  for(int i = 1 ;i <= m ; i ++ )
    ok &= fine[i];

  return ok ;   
}
int tests() {
  cin >> n >> m ;
  int i;
  forn(i,0,n)
    cin >> days[i+1];
  forn(i,0,m)
    cin >> req[i+1];  
  int L = 1,R = n,mid ;
  int ans  = -1 ;
  while(L <= R){
    mid = (L+R)/2;
    if(poss(mid)){
      R = mid-1;
      ans = mid;
    }
    else
      L = mid+1;
  }  
  cout << ans  << '\n' ;
  return 0;
} 
int main(){
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