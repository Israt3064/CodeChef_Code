#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int res = 1;
        if(n <= 1)
        {
            res = 0;
        }
        else{
            for(int i = 2; i <= n/2; i++)
            {
                if(n % i == 0)
                {
                    res = 0;
                }
            }
        }
        if( res == 0)
        {
           cout << "Not prime." << endl;
        }
        else{
            cout << "Prime." << endl;
        }

    }
}
int main()
{
    solve();
    return 0;

}

