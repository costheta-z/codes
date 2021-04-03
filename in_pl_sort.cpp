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
    int n, m, bi=0;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    for (int i=0; i<n; i++) {
        if(a[i]>b[0]) {
            swap(a[i], b[0]);
            int as=b[0], j;
            for(j=1; j<m && b[j]<as; j++) b[j-1]=b[j];
            b[j-1]=as;
        }
    }
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0; i<m; i++) cout<<b[i]<<" ";
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