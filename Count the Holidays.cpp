#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int cnt=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if((a[i]%7==0)||(a[i]%7==6))
        {
            continue;
        }
        else{
            cnt++;
        }
    }
    cout<<8+cnt<<endl;
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

