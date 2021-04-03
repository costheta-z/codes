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
    int n, s=0, temp;
    cin>>n;
    unordered_map<int, int>m;
    m.insert(0);
    int f=0, l=n-1;
    for(int i=0; i<n; i++) {
        cin>>temp;
        s+=temp;
        if(m[s]==1) {
            cout<<"found"<<endl;
            return;
        }
        else m[s]=1;
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