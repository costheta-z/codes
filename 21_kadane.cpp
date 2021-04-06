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
    int n, maxi=INT_MIN, ans=0, cou=0;
    cin>>n;
    int a[n], sum=0;
	for(int i=0; i<n; i++) {
        cin>>a[i];
        sum+=a[i];
        if(sum<0) sum=0;
        ans=max(ans, sum);
        if(a[i]<0) cou++;
    }
    if(cou==n) ans=*max_element(a, a+n);
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