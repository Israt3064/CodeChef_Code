#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b, r=0;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(a>b)
    {
        while(a>b)
        {
            b*=2;
        }
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(a<b)
    {
        while(a<b)
        {
            a*=2;
        }
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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

