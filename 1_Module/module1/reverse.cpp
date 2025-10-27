#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    auto latelement = v.end();
    latelement--;
    cout << *latelement << '\n';

    // reverse
    //  reverse(v.begin(),v.end());
    // sort
    //  sort(v.begin(),v.end()); assending order
    //  sort(v.rbegin(),v.rend());// descendin order
    //  sort(v.begin(),v.end(),greater<int>());

    for (auto vl : v)
    {
        cout << vl << " ";
    }
    cout << '\n';
    // min element
    auto mn = min_element(v.begin(), v.end());
    cout << *mn << endl;

    auto mx = max_element(v.begin(), v.end());
    cout << *mx<< endl;

    cout << '\n';
    return 0;
}