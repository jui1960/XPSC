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
        string s;
        cin >> s;
        vector<pair<int, char> > upper, lower;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!lower.empty())
                    lower.pop_back();
            }
            else if (s[i] == 'B')
            {
                if (!upper.empty())
                    upper.pop_back();
            }
            else if (islower(s[i]))
                lower.push_back(make_pair(i, s[i]));
            else
                upper.push_back(make_pair(i, s[i]));
        }
        vector<pair<int,char> > all = upper;
        all.insert(all.end(), lower.begin(), lower.end());

     
        sort(all.begin(), all.end());

        for (pair<int,char> p : all) cout << p.second;
        cout << '\n';
    }
    return 0;
}