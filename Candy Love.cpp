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
    int sum = 0;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
       int a;
       cin >> a;
       v.pb(a);
       sum += a;
    }
    if(sum%2 == 1)
    {
        cout << "YES" << endl;
    }
    else{
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

