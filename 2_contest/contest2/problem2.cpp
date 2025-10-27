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
        int x, y, z;
        cin >> x >> y >> z;
        double per = (double)50 / 100 * 100;
        // cout << per << endl;
        int result = x * y;

        double ss = (double)z / result * 100;
        // cout<<ss<<endl;
        // cout<<per<<endl;

        if (ss > per)
        {
            cout << "yes" << endl;
        }

        else
            cout << "no" << endl;

        // cout<< result<<endl;

        // int finl = persent *100;
        // cout<< finl <<endl;

        // if(result <= time)
        //     cout<<"YES"<<'\n';
        // else
        //     cout<<"No"<<'\n';
    }
    return 0;
}
