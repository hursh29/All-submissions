#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i,temp=0;
    for(i=n-1;i>=0;i--)
    {
        int sum=0,j;
        for(j=i;j>=0;j--)
        {
            if(sum+arr[j]>k)
                break;
            else
            {sum+=arr[j];temp++;}
        }
        
        m--;
        if(m==0)
        {cout<<temp;return 0;}
        i=j+1;
        
    }
    cout<<n;
    return 0;
}