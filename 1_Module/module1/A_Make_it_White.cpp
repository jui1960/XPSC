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
        string s;
        cin >> s;

        int white = -1, black = -1;
        white = s.find('B');
        black = s.rfind('B');
        int ans = black-white + 1;
        cout << ans << '\n';
    }
    return 0;
}