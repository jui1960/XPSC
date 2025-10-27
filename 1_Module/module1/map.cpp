#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> mp;
    // mp.insert({10,20}); //key->10,value->20

    // mp[10]=20;
    // mp[2]=200;
    // mp[10]=15;
    // // duplicate value rakhe na,,sobar last a key te je value thakbe seitai print hbe
    // cout<<mp[10];

    mp[2] = 12;
    mp[5] = 9;
    mp[6] = 49;
    mp[8] = 22;
    mp[10] = 15;
    mp[17] = 7;

    // print
    //  for (auto [key, value] : mp)
    //  {
    //      cout << key << " -> " << value << '\n';
    //  }
    for (auto it : mp)
    {
        int key = it.first, value = it.second;
        cout << key << " -> " << value << '\n';
    }

    // find
    auto it = mp.find(2);
    cout << it->second << '\n'; // sudu value acces

    auto itt = mp.find(55);
    if (itt == mp.end())
    {
        cout << "key not found" << '\n';
    }
    else
    {
        cout << " found" << '\n';
    }

    cout << endl;

    // erase log(n)
    mp.erase(2);
    for (auto it : mp)
    {
        int key = it.first, value = it.second;
        cout << key << " -> " << value << '\n';
    }

    cout << endl;

    auto ittt = mp.begin();
    ittt++;

    cout << ittt->first << " -> " << ittt->second << '\n';

    cout << endl;
    // lower bound 0(log n) greter or = (<=)
    auto iitt = mp.lower_bound(3);
    cout << iitt->first << " -> " << iitt->second << '\n';

    cout << endl;
    // uper bound

     auto iittt = mp.upper_bound(9);
    cout << iittt->first << " -> " << iittt->second << '\n';
   

    return 0;
}