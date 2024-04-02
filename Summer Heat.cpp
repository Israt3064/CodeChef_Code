#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y,a,b,r1,r2,r;
    cin>>x>>y>>a>>b;
    r1=a/x;
    r2=b/y;
    r=r1+r2;
    cout<<r<<endl;
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

