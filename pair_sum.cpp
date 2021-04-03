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
    int a[n];
    unordered_map<int, int>m;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        m[a[i]]++;
    }
    for(int i=0; i<n; i++) {
        if(a[i]!=s-a[i] && m[s-a[i]]!=0) {
            cout<<a[i]<<" "<<s-a[i]<<endl; 
            return;
        }
        else if(a[i]==s-a[i] && m[s-a[i]]>1) {
            cout<<a[i]<<" "<<a[i]<<endl;  
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