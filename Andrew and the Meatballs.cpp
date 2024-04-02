#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,m;
    cin>>n>>m;
    vector<long long>v;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    partial_sum(v.begin(),v.end(),v.begin());
    long long ans =-1;
	    for(int i=0; i<n; i++) {
	        if(m-v[i]<=0) {
	            ans=i+1;
	            break;
	        }
	    }
	    cout<<ans<<endl;

    }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     solve();
    }
    return 0;

}


