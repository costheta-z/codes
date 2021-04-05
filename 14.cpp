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
    int n, right=0, left=0;
    cin>>n;
    int a[n], ind=-1;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        right+=a[i];
    }
    right-=a[0];
    for(int i=0; i<n-1; i++) {
        //cout<<left<<" "<<right<<endl;
        if(right==left) {
            ind=i;
            cout<<ind<<endl;
        }
        left+=a[i];
        right-=a[i+1];
    }
    if(left==right) cout<<n-1<<endl;
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