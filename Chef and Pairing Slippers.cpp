#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, l, x;
        cin>>n>>l>>x;
        int a = min(l,n-l);
        int res = a*x;
        cout<<res<<endl;
    }
}
int main()
{
    solve();
    return 0;

}

