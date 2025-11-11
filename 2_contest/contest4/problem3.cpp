#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> B(N);
        for (int i = 0; i < N; i++) cin >> B[i];

        int one = count(B.begin(), B.end(), 1);

        int even1 = one % 2;
        int even2 = N % 2;
        if (even1==even2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
