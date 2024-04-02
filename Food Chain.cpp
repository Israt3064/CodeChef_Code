#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int e, k;
    cin >> e >> k;
    int cnt = 0;
    while(e>0)
    {
        e = e/k;
        cnt++;
    }
    cout << cnt << endl;


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

