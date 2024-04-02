#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    float a,b;
    cin>>a>>b;
    float f,s;
    f=(100-(100*a/100));
    s=(200-(200*b/100));
    if(f==s)
    {
        cout<<"BOTH"<<endl;
    }
    else if(f>s)
    {
        cout<<"SECOND"<<endl;
    }
    else{
        cout<<"FIRST"<<endl;
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

