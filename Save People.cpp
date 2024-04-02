#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    ll n,m,x,y;
  cin>>n>>m>>x>>y;

  ll top= (x-1)*m;
  ll down= (n-x)*m;

  ll left = (y-1)*n;
  ll right= (m-y)*n;

  cout<<max({top,down,left,right})<<endl;



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

