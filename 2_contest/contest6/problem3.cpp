#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(5);
        for (int i = 0; i < 5; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for (auto x : v)
            sum += x;
        if (sum >= 35)
        {
            cout << 0 << '\n';
            continue;
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        for (int i = 0; i < 5 && sum < 35; i++)
        {
            sum += (10 - v[i]);
            cnt++;
        }
        cout << cnt * 100 << '\n';
    }

    return 0;
}