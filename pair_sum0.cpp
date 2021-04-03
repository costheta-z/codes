//Find a pair with the given sum in an array

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
    int n, s;
    cin>>n>>s;
    int a[n], f=0, l=n-1;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    while(f<l) {
        if(a[f]+a[l]<s) f++;
        else if(a[f]+a[l]>s) l--;
        else {
            cout<<a[f]<<" "<<a[l]<<endl;
            return;
        }
    }
    cout<<"-"<<endl;
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