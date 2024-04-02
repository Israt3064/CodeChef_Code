#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
bool is_Prime(int a)
     {
       for(int i=2; i<= sqrt(a); i++)
       {
           if(a%i == 0)
           {
               return false;
           }
       }
       return true;
     }
void solve()
{
    ll m, n;
    cin >> m >> n;
       for(int i = m; i <= n; i++)
       {
           if(i == 1)
           {
               continue;
           }
           if(is_Prime(i))
           {
               cout << i << endl;
           }
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

