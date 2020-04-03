// 4/3/2020 1:53:12 AM
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
bool ok(string A){
  int N = A.size();
  // N--;
  int i = 0; 
  while(i < N/2 && A[i] == A[N-1-i])
    i++;
  return (i == N/2);  
}     
int tests() {
  string  s ;
  cin >> s; 
  int i,n = s.length();
  forn(i,-1,n){ 
    string s_ ;
    int j ; 
    forn(j,0,26){
      s_ = s.substr(0,i+1);   
      s_.push_back('a'+j);

      s_ += s.substr(i+1,n-i-1);
      cout << s_ << '\n' ;
      if(ok(s_))
      {
        cout << s_ << '\n' ;
        return 0;
      }
    }
    }  
  cout << "NA\n" ; 
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