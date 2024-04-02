#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    float n,m;
    cin>>n>>m;
    float a = (n-(n*10/100));    //(1-(1*10/100))
    cout<<a<<endl;
    if(a==m)
    {
        cout<<"EITHER"<<endl;
    }
    else if(a<m)
    {
        cout<<"ONLINE"<<endl;
    }
    else{
        cout<<"DINING"<<endl;
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

