#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a , b;
        cin >> n >> a >> b;
        int c = 0, d = 0 ;
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                c += 1*a;
            }
            else{
                d += 1*b;
            }
        }
        cout << c + d << endl;

    }
}
int main()
{
    solve();
    return 0;

}

