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
    cout << v.size() << "\n";

    v.pop_back();
    cout << v.size() << "\n";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    cout<< v.front();
    cout<<"\n";
    cout<<v.back()<<endl;
    v.clear();
    cout<<v.empty()<<'\n'; //vector empty hoile 1,,empty na hoile 0

    //assign

    int k;
    cin>>k;
    vector<int>ve(n,5);
    for (int i = 0; i <n; i++)
    {
        cout<<ve[i]<<" ";
    }
    


    return 0;
}