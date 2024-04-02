// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {


    vector<pair<int,int>>p;
    for(int i = 0;i < 3;i++)
    {
        int a , b;
        cin >> a >> b;
        p.push_back(make_pair(a,b)) ;
    }
    sort(p.begin(),p.end());
    for(int i = 0; i < p.size();i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }


    return 0;
}
