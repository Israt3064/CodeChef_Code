#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    ll a, b, x;
    cin >> a >> b >> x;
    ll r = abs(a-b);
    if(r % (2*x) == 0)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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

