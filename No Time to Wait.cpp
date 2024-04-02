#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,x,sum=0, res=0;
        cin>>n>>h>>x;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]+x >= h)
            {
                res = 1;
                break;
            }

        }
        if(res==1)
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
    solve();
    return 0;

}

