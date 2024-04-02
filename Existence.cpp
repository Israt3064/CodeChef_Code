
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long x,y;
    cin>>x>>y;
    long long r, l;
    r = x*x;
    l = 2*y;
    if(r==l)
    {
      cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

