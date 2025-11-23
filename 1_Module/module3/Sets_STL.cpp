#include <bits/stdc++.h>
using namespace std;
//simple programm using sets

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    set<int> s;

    while (q--)
    {

        int a, b;
        cin >> a >> b;
        if (a == 1)
            s.insert(b);

        // cout << s.size() << '\n';

        else if (a == 2)
        {
            if (!s.empty())
            {
                s.erase(b);
            }
        }
        else
        {
            auto it = s.find(b);
            if (it!= s.end())
            {
                cout << "Yes" << '\n';
            }
            else
                cout << "No" << '\n';
        }
    }
    return 0;
}
