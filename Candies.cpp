#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int n, x, mx = 0;
    cin >> n;
    map<int, int>mp;
    for(int i=0; i<2*n; i++)
    {
        cin >> x;
        mp[x]++;
        if(mp[x]>mx)
        {
            mx = mp[x];
        }
    }
    if(mx<3)
    {
      cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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

