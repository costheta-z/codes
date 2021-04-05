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
    int a[n], flag=0, curr=1, ans=1, same=1;
    for(int i=0; i<n; i++) cin>>a[i];
	for(int i=1; i<n; i++) {
	    if(a[i]<a[i-1]) {
	        flag=1;
	        break;
	    }
	    else if(a[i]>a[i-1]) {
	        flag=0;
	        break;
	    }
	}
    for(int i=1; i<n; i++) {
        if(a[i]>=a[i-1] && flag==0) curr++;
        else if(a[i]>a[i-1] && flag==1) {
            ans=max(curr, ans);
            curr=same+1;
            flag=0;
        }
        else if(a[i]<=a[i-1] && flag==1) {
            curr++;
            if(a[i]!=a[i-1]) same=1;
            else same++;
        }
        else if(a[i]<a[i-1] && flag==0) {
            flag=1;
            curr++;
            same=1;
        }
        
    }
    ans=max(ans, curr);
    cout<<ans<<endl;
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