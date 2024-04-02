#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int sum = a+b;
    if(sum <= 1)
    {
        cout<<"BOB"<<endl;
    }
    int res=0;
    for(int i=2; i<=sum/2; ++i)
    {
        if(sum%i==0)
        {
           res = 1;
        }
    }
    if(res==0)
    {
        cout<<"ALICE"<<endl;
    }
    else{
        cout<<"BOB"<<endl;
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

