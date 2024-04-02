#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[100];
    int sum = 0;
    cout << "Enter array elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout <<"Summation: " << sum << endl;
    return 0;
}
