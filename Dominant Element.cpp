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
    map<int, int> m;
    lp
    {
        int x;
        cin>>x;
        m[x]++;
    }
    int mx=0;
    int cnt=0;
    for(auto it:m)
    {
       mx = max(mx,it.second);
    }
    for(auto it:m)
    {
        if(it.second==mx)
            cnt++;
    }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

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

