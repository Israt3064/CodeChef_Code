#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum;
    sum=a+c;
    if(sum>b)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<b<<endl;
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

