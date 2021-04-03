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
    int n, m1=-INT_MAX, m2=m1, mi1=-m1, mi2=mi1;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]>=m1) {
            m2=m1;
            m1=a[i];
        }
        if(a[i]<=mi1) {
            mi2=mi1;
            mi1=a[i];
        }
    }
    if(m1*m2>mi1*mi2) cout<<m1<<" "<<m2<<endl;
    else cout<<mi1<<" "<<mi2<<endl;
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