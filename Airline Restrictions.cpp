#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
using namespace std;
void solve()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if(((a+b <= d) && (c <= e)) || ((b+c <= d) && (a <= e)) || ((a+c <= d) && (b <= e)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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

