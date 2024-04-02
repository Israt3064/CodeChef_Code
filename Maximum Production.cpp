#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
#define pbb pop_back
#define nl '\n'

using namespace std;
void solve()
{
    int d, x, y, z;
    cin >> d >> x >> y >> z;
    int r1 = x*7;
    int r2 = (y*d) + (z*(7-d));
    int res = max(r1, r2);
    cout << res << endl;


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


