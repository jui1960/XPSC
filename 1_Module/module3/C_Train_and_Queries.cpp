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
        int n, q;
        cin >> n >> q;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {

            int x;
            cin >> x;
            mp[x].insert(i);
        }

        // for (auto [x, y] : mp)
        // {
        //     cout << x << "-> ";
        //     for (auto value : y)
        //     {
        //         cout << value << " ";
        //     }
        //     cout << '\n';
        // }

        for (int i = 1; i <= q; i++)
        {
            int l, r;
            cin >> l >> r;
            if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()))
            {
                cout << "NO" << '\n';
            }
            else
            {
                int ans, res;
                ans = *mp[l].begin();
                res = *mp[r].rbegin();
                if (ans < res)
                {
                    cout << "YES" << '\n';
                }
                else
                    cout << "NO" << '\n';
            }
        }
    }

    return 0;
}
