#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int mod = n%10;
    if(mod<5)
    {
        cout<<(100-((n/10)*10))<<endl;
    }
    else{
        cout<<(100-(((n/10)+1)*10))<<endl;
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

