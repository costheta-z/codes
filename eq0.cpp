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
    int n, s=0, ans=0, ind=-1;
    cin>>n;
    int a[n];
    unordered_map<int, int>m;
    m[0]=-1;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]==0) a[i]=-1;
        s+=a[i];
        if(m.find(s)!=m.end() && ans<i-m[s]) {
            ans=i-m[s];
            ind=i;
        }
        if(m.find(s)==m.end()) m[s]=i;    
    }
    if(ind==-1) cout<<"-"<<endl;
    else cout<<ind-ans+1<<" "<<ind<<endl;
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