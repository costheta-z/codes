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
    int n, m, j=0, nonz=0, k;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]!=0) {
            a[j++]=a[i];
            nonz++;
        }
    }
    //for(int i=0; i<n; i++) cout<<a[i]<<" ";
    for(int i=0; i<m; i++) cin>>b[i];
    j=n-1; k=m-1;
    for(int i=nonz-1; i>=0; ) {
        //if(k<0) a[j--]=a[i--];
        if(a[i]>b[k]) a[j--]=a[i--];
        else a[j--]=b[k--];
    }
    while(k>=0) a[j--]=b[k--];
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