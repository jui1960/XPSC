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
        int x;
        cin >> x;
        if (x == 3)
        {
            cout << 3 << '\n';
        }
        else if (x > 3)
        {
            int ans = x - 3;
            int rs = 0;
            if (ans % 2 == 0)
            {
                rs = ans / 2;
                cout << rs << '\n';
            }
            else
            {
                cout << ans << '\n';
            }
        }
        else
        {
            cout << x / 2 << '\n';
        }
    }

    return 0;
}