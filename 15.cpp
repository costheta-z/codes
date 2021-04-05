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
    int n, right=0, left=0, cmax=1, s=0, e=0;
    cin>>n;
    int a[n], ind=-1;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        int mini=a[i], maxi=a[i], visited[n+1]={0};
        visited[i]=1;
        for(int j=0; j<n; j++) {
            if(i>j && visited[j]>0) break;
            visited[j]=1;
            if(a[j]>maxi) maxi=a[j];
            if(a[j]<mini) mini=a[j];
            if(maxi-mini==j-i) {
                cmax=max(cmax, j-i+1);
                s=i;
                e=j;
            }
        }
    }
    //cout<<cmax<<endl;
    cout<<i<<" "<<j<<endl;
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