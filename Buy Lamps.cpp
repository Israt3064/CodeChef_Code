#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k,x,y;
   cin>>n>>k>>x>>y;
   int r1,r2,res;
   r1 = k*x;
   if(x>y)
   {
    r2 = (n-k)*y;
   }
   else{
    r2 = (n-k)*x;
   }
   res = r1+r2;
   cout<<res<<endl;
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
