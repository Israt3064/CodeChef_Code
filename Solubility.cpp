#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x, a, b;
    cin>>x>>a>>b;
    int sum;
    sum = (a+((100-x)*b))*10;
    cout<<sum<<endl;

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

