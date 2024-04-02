#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int x,y,z;
     cin>>x>>y>>z;
     int div,mod, res;
     div = y/z;
     mod = y%z;
     if(mod==0)
     {
         cout<<x*(y/z)<<endl;
     }
     else{
        res = ((div+1)*x);
        cout<<res<<endl;
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
