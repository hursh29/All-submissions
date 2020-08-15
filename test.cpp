// Wed Aug 12 20:03:03 IST 2020   
#include <bits/stdc++.h>        
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define forn(ii,a,b)       for(int64 ii = (int)a ; ii < (int)b  ; ii++ )
#define debug(x)           cerr << #x << " " << x << " -- \n"
#define I__O               ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define int64              long long   
#define all(x)             (x).begin(),(x).end() 
#define ff                 first
#define ss                 second
#define pppp               pair <int,int> 
#define precise(x)         cout << fixed << setprecision(12) << x << '\n'; 
using namespace std ;    
// policy based   
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set ; 
 
const int MOD1 = 1e9+7;
const int MOD2 = 1e9+9;
const double pi = 3.141592653589793238;
const int N = 1e5+7; 
const int INF = 2e9;

struct compare{
    bool operator()(vector <int64> A, vector <int64> B){
        if(A[0] == B[0])
            return A[1] < B[1];
        return A[0] < B[0];
    }
};      
  
int tests(){  
    int n;
    cin >> n ;
    vector <int> v(n);
    for(auto &X: v)
        cin >> X;
    sort(all(v));
    int mex = v.back();
    int padding =  0;
    while(mex > 0){
        padding++;
        mex >>=1;
    } 
    vector<pair <int,int>> onesAndZeroes;
    forn(i,0,n){
        int ones =__builtin_popcount(v[i]);
        onesAndZeroes.push_back({ones,padding-ones});
    }   
    int ans =  0;
    forn(i,1,(1<<n)){
        int ones = 0, zeroes = 0;
        forn(j,0,n)
            if(i&(1<<j)){ 
                ones += onesAndZeroes[j].first;
                zeroes += onesAndZeroes[j].second;
            }
        ans += ones == zeroes;
    }
    string result;
    int ansCopy = ans;
    while(ansCopy){
        result.push_back('0'+ansCopy%2);
        ansCopy >>=1;
    }
    int point = result.size();
    while(point < padding)
        result += '0',point++;
    reverse(all(result));
    cout << result << '\n';
    return 0;
}   
int main(){
    I__O ;      
    int cases = 1 ;  
    // cin >> cases ;
    while(cases--)
        tests(); 
    return 0 ; 
 
}
