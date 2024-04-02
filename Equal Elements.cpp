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
    vector<int>v;
    vector<int>count(n+1,0);
    lp
    {
        int x;
        cin>>x;
        v.pb(x);
        count[v[i]]++;
    }
    sort(count.begin(),count.end());
    int mx = count[n];
    cout<<n-mx<<endl;

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

