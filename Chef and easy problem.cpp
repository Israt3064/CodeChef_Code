#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v;
    lp
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(v.rbegin(), v.rend());
    ll sum=0;
    for(int i=0; i<n; i+=2)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;

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

