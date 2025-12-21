#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    a = a + 1;
    int ans = a*4;
    int ans1 = b*3;
    int p = ans+ans1;
    if(p%8==0) cout<<p/8<<'\n';
    else cout<<p/8+1<<'\n';

    return 0;
}