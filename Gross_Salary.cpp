#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        float bs;
        cin >> bs;
        float hra;
         float da;
        if(bs <1500)
        {
             hra = (bs*10)/100;
             da = (bs*90)/100;
             cout << fixed;
            cout << setprecision(2) << bs + hra + da << endl;

        }
        else
        {
            hra = 500;
            da = (bs*98)/100;
            cout << fixed;
            cout << setprecision(2) << bs + hra + da << endl;
        }
    }
	// your code goes here
	return 0;
}

