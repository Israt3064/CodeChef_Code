#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    while(y--)
    {
        x++;
    }
    if(x%2==0)
    {
        cout<<"Janmansh"<<endl;
    }
    else{
        cout<<"Jay"<<endl;
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

