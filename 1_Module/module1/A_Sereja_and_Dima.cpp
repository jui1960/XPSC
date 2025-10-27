#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
    int serje = 0, dima = 0, move = 1;
    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back();
        int mx = max(left, right);
        if (move % 2 != 0)
        {
            serje += mx;
        }
        else
        {
            dima += mx;
        }

        if (mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }

        move++;
    }
    cout << serje << " " << dima;

    return 0;
}