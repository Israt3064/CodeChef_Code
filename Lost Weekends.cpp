#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int a1, a2, a3, a4, a5, p;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> p;
    int r = ((p*(a1 + a2 + a3 + a4 + a5)))/ 5;
    if(r <= 24)
    {
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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

