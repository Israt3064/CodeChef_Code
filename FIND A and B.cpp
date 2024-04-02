#include<bits/stdc++.h>
#define ll long long
#define lp for(int i=0; i<n; i++)
#define lp1 for(int i=1; i<n; i++)
#define pb push_back
#define pbb pop_back
#define nl '\n'

using namespace std;
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(((x*y)%z == 0))
    {
        cout << x*y << " " << z << '\n';
    }
    else if(((y*z)%x == 0))
    {
        cout << y*z << " " << x << '\n';
    }
    else if(((x*z)%y == 0))
        {
        cout << x*z << " " << y << '\n';
    }
    else{
        cout << -1 << '\n';
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


