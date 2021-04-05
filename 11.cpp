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
    int maxa[2]={0}, flag=0, maxi=0, indc, indans;
    for(int i=0; i<n; i++) {
        if(a[i]==1) maxa[flag]++;
        else {
            if(maxa[0]+maxa[1]>maxi) indans=indc;
            maxi=max(maxi, maxa[0]+maxa[1]);
            if(flag==0) {
                flag=1;
                maxa[1]=0;
            }
            else {
                flag=0;
                maxa[0]=0;
            }
            indc=i;
        }
    }
    if(maxa[0]+maxa[1]>maxi) indans=indc;
    cout<<indans<<endl;
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