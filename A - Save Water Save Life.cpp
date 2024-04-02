#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int h,x,y,c;
    cin>>h>>x>>y>>c;
    int sum,multi;
    sum = x+(y/2);
    multi = sum*h;
    if(multi<=c)
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

