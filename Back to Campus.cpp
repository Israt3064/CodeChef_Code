#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%k==0)
        {
            cout<<n/k<<endl;
        }
        else{
            cout<<(n/k)+1<<endl;
        }

    }
}
int main()
{
    solve();
    return 0;

}

