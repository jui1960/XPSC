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

        string a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        string over = a + b + c + d + e + f;
        bool hartix = false;

        for (int i = 0; i + 2 < over.size(); i++)
        {
            if (over[i] == 'W' && over[i + 1] == 'W' && over[i + 2] == 'W'){

                hartix = true;
                break;

            }
                
        }
        if (hartix)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}
