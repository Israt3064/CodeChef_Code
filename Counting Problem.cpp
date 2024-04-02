#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        v.pb(a);
    }
        int cnt = 0;
        lp
        {
            if(v[i]%2 != 0)
            {
                cnt++;
            }
        }
        if(cnt%2 != 0 || cnt == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
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

