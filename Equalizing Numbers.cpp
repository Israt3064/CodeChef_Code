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
    int a, b;
    cin >> a >> b;
    if((a+b)%2 == 0)
    {
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
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


