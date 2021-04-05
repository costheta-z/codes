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
    int n, num, cou=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(cou==0) {
            num=a[i];
            cou=1;
        }
        else if(a[i]==num) cou++;
        else cou--;
    }
    cout<<num<<endl;
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