#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // auto it = s.begin();
    // it++;
    // it++;
    // cout<<*it<<'\n';

    s.erase(200);
    for (auto value : s)
    {
        cout << value << " ";
    }
    cout << '\n';

    cout << s.count(5) << '\n'; // jody 5 khuje na pai taile 0 print korbe otherwise 1

    auto it = s.find(25);
    if (it != s.end())
    {
        cout << "found" << '\n';
    }
    else
        cout << "not found" << '\n';

    // lower bound  y khujbe ,,y jody na pai taile y er kasakasi sobchaia boro value return korbe

    // int y;
    // cin >> y;
    // auto itt = s.lower_bound(y);

    // cout << *itt << '\n';



    //uper bound  y kjuhbee ,,jody y na pai tar theke kasakasi soto value ta return korbe
    
    int y;
    cin >> y;
    auto itt = s.upper_bound(y);
    cout << *itt << '\n';







    // set short value rakhe...20 9 6 200 9 4 ,,
    // akn eitar begin() ber korte chaile 4 ashbe
}