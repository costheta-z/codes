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
    int n, maxi=INT_MIN, mini=INT_MAX, su=0, rsu=0, maxi2=INT_MIN, mini2=INT_MAX;
    cin>>n;
    int a[n];
	for(int i=0; i<n; i++) {
        cin>>a[i];
        su+=a[i];
    }
    for(int i=0; i<n; i++) {
        rsu+=a[i];
        if(mini<0) maxi=max(maxi, rsu-mini);
        else maxi=max(maxi, rsu);
        mini=min(rsu, mini);
        if(maxi2>0) mini2=min(mini2, rsu-maxi2);
        else mini2=min(mini2, rsu);
        maxi2=max(rsu, maxi2);
    }
    cout<<max(su-mini2, maxi)<<endl;
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