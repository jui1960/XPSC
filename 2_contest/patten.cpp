#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        // odd আগে print করি
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";

        // তারপর even print করি
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";

        cout << "\n";
    }
}
