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
    int n, maxi=INT_MIN, ans=0;
    cin>>n;
    int a[n], sum[n];
	for(int i=0; i<n; i++) {
        cin>>a[i];
        if(i==0) sum[0]=a[0];
        else sum[i]=sum[i-1]+a[i];
        ans=max(ans, sum[i]);
    }
    for(int i=n-1; i>=0; i--) {
        if(sum[i]>maxi) maxi=sum[i];
        else if(sum[i]<=0) ans=max(ans, maxi-sum[i]);
    }
    cout<<ans<<endl;
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