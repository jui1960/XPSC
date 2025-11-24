#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool t = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= 4)
        {
            t = true;
            break;
        }
    }
    if (t == true)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "Yes" << '\n';
    }

    return 0;
}


