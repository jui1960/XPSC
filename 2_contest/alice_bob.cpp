// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n),b(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }

//         int cnt = 0;

//         for (int i = 0; i < n; i++)
//         {

//             int tw1 = a[i] * 2;
//             int tw2 = b[i] * 2;

//             if (tw1 >= b[i] && tw2 >= a[i])
//             {
//                 cnt++;
//             }
//         }
//             cout << cnt << endl;

//     }
//     return 0;
// }

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
        long long a, b;
        cin >> a >> b;

        if (a > b)
        {
            // a থেকে b কখনও পাওয়া সম্ভব নয়
            cout << -1 << "\n";
        }
        else if (a == b)
        {
            // a ইতিমধ্যেই b এর সমান → 0 অপারেশন
            cout << 0 << "\n";
        }
        else
        {
            long long x = a ^ b;
            if (x <= a)
            {
                // একবারের XOR যথেষ্ট
                cout << 1 << "\n";
                cout << x << "\n";
            }
        }
    }
}