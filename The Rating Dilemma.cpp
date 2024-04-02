#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int x = n+1;
       int y = n-x;
       cout<<x*y<<endl;
    }
}
int main()
{
    solve();
    return 0;

}

