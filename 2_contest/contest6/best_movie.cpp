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
        int n;
        cin >> n;
        int mn = INT_MAX;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            if (a >= 7)
                mn = min(mn, b);
        }
        if (mn == INT_MAX)
            cout << -1 << '\n';
        else
            cout << mn << '\n';
    }

    return 0;
}