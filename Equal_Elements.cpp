#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans=0;
    map<int,int>mp;
    lp
    {
        int x;
        cin>>x;
        mp[x]++;
    }
     for(auto it:mp)
    {
        if(it.second>ans)
        {
            ans=it.second;
        }
    }
    cout<<n-ans<<endl;

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

