#include<bits/stdc++.h>
using namespace std;

#define _z ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long int
#define endl "\n"
#define mod 1000000007
#define pb_ push_back
#define mp_ make_pair
//______________________________z_____________________________

void solve()
{
    int n;
    cin>>n;
    int a[n], left[n], right[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(i==0) right[i]=a[i];
        else right[i]=right[i-1]*a[i];
    }
    left[n-1]=a[n-1];
    for(int i=n-2; i>=0; i--) {
        left[i]=left[i+1]*a[i];
    }
    cout<<left[1]<<" ";
    for(int i=1; i<n-1; i++) {
        cout<<right[i-1]*left[i+1]<<" ";
    }
    cout<<right[n-2]<<endl;
}

int32_t main()
{
    _z;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}