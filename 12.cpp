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
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=n-1; i>=0; i--) {
        int ind=rand()%(i+1);
        swap(a[i], a[ind]);
    }
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
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