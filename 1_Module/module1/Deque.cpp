
//vector er theke deque a double memory use hoi tobe vector er theke deque er   besi subidhaa

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    dq.push_front(8);
    dq.push_back(9);
    for (auto vl : dq)
    {
        cout << vl << " ";
    }
    cout << '\n';


    dq.pop_front();
    dq.pop_back();
    sort(dq.begin(),dq.end());
    for (auto vl : dq)
    {
        cout << vl << " ";
    }
    cout << '\n';

    return 0;
}