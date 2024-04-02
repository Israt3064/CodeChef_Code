#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    int div = x/2;
    if(div<=y)
    {
        cout<<div<<endl;
    }
    else{
        cout<<y<<endl;
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

