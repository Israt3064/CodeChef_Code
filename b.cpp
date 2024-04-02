#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm>


typedef long long int ll;
using namespace std;

int main()
{
    time_t start;

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum)
    {
         ll N, A, B;
        cin >> N >> A >> B;

        vector<int> sequence(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> sequence[i];
        }

        int count = 0;
        for (int i = 0; i < N; ++i)
        {
            for (int j = i + 1; j < N; ++j)
            {
                int sum = sequence[i] + sequence[j];
                if (sum >= A && sum <= B)
                {
                    ++count;
                }
            }
        }
        time_t endTime;

        cout << "Case " << caseNum << ": " << count << endl;
    }
    return 0;
}
