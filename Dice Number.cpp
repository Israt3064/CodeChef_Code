#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a1, a2, a3;
        string b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        string a;
        a+=a1;
        a+=a2;
        a+=a3;
        string b;
        b+=b1;
        b+=b2;
        b+=b3;
        sort(a.rbegin(), a.rend());
        int al = stoi(a);
        sort(b.rbegin(), b.rend());
        int bo = stoi(b);
        if(al>bo)
        {
            cout << "Alice" << endl;
        }
        else if(al<bo)
        {

            cout << "Bob" << endl;
        }
        else
        {

            cout << "Tie" << endl;
        }




    }
}
int main()
{
    solve();
    return 0;

}

