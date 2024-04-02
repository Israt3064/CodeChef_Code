#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int a;
    int cnt=0,ans=0;

    for(int i=0; i<n; i++)
    {
        cin>>a;

        if((a+ans)>=k)
        {
            ans+=a-k;
        }
        else if(cnt==0)
        {
            cnt=i+1;
        }
    }

    if(cnt>0)
    {
        cout<<"NO "<<cnt<<endl;
    }
    else
        cout<<"YES"<<endl;
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

