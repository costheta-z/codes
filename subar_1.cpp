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
    unordered_multimap<int, int>m;
    m.insert({0, -1});
    int f=0, l=n-1;
    for(int i=0; i<n; i++) {
        cin>>temp;
        s+=temp;
        auto it=m.find(s);
        if(it!=m.end()) {
            while(it!=m.end() && it->first==s) {
                cout<<it->second+1<<" "<<i<<endl;
                it++;
            }
        }
        m.insert({s, i});
    }
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