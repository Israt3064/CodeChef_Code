#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==6)
        {
            cout<<(n/7)+1<<endl;
        }
        else{
            cout<<n/7<<endl;
        }

    }
}
int main()
{
    solve();
    return 0;

}

