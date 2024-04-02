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
       ll x;
       cin>>x;
       v.pb(x);
    }
    ll a = v[0];
    lp1{
    a = __gcd(a,v[i]);
    }
    cout<<a<<endl;
    /**ll cnt =0;
        if((a>1) && v[i]%a==0)
        {
            cnt++;
            cout<<cnt<<endl;
        }
        else if(a==1)
        {
            cout<<0<<endl;
        }**/


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
