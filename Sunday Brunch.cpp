#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int d = a/b;
        if(d > 20)
        {
            cout << 20 << endl;
        }
        else{
            cout << d << endl;
        }

    }
}
int main()
{
    solve();
    return 0;

}

