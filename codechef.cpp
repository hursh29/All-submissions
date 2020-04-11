#include <bits/stdc++.h>  

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
// Sat Apr 11 06:23:29 IST 2020   

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

const int M = 1e9+7 ;
int tests(){
  int h,w; 
  cin >> h >> w ;
  vector <int> r(h),c(w);
  int mark[1007][1007] = {0};  
  set <pair <int,int>> s ;
  int j = 0 ;
  for(auto &x : r)
  {
    cin >> x ;
    for(int i = 0 ; i < x ; i++ )
      mark[j][i] += 1 ;
    mark[j][x] += 1 ; 
    s.insert({j,x});
    j +=1  ;
  }
  j = 0 ;
  for(auto &x: c){
    cin >> x ;

    for(int i = 0 ; i < x ; i++ )
      if(mark[i][j] == 1 && s.find({i,j}) != s.end())
        return cout << -1 << '\n',0;
      else 
        mark[i][j] += 1 ;


    if(mark[x][j] == 1 && s.find({x,j}) == s.end())       
      return cout << -1<< '\n',0;

    mark[x][j] += 1;

      j+= 1 ;
  }
  int counting = 0 ;
  for(int i = 0 ; i < h ; i++){ 
    forn(j,0,w){
      // cout << mark[i][j] << ' ' ;  
      if(!mark[i][j])
        counting++ ;
    }
  // cout << '\n';
  }  

  int ans  = 1 ;
  while(counting--)
    ans = (ans*2)%M;
  cout << ans << '\n' ;
  return 0 ;
}
int32_t main(){
    I__O ;            
    int cases = 1 ;  
    // cin >> cases ;  
    for(int  _ = 1 ; _ <= cases ; _++ ){   
    // cout << "Case #" << _ << ": ";
      tests(); 
    }
    return 0 ; 
}

// -Wall -Weptra -O2
// -pedantic -std=c++11
// -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC