#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        int n = s - (x+y);
        int mx = max(x,y);
        int a;
        if(n >= z)
        {
            cout << 0 << endl;
        }
        else
        {
            a = n+mx;
            if(a >= z)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }

    }
}
int main()
{
    solve();
    return 0;

}
