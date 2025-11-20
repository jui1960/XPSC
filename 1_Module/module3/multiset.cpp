#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // multiset sorted,bt unic na,, duplicate value allow kore,, 3,4,3,2,5,6 - 2,2,3,4,5,6

    // int n;
    // cin >> n;
    // multiset<int> s;
    // for (int i = 1; i <= n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     s.insert(x);
    // }
    // auto it = s.begin();
    // it++;
    // cout << *it << '\n';

    // value print,
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto l : s)
    {
        cout << l << " ";
    }
    cout << '\n';


    //find 

    auto f = s.find(4);
    if (f != s.end())
    {
        cout << "found" << '\n';
    }
    else
        cout << "not found" << '\n';

    s.erase(2); //0(logn+k) multiset a 2 joto bar ase sob erase(muse  jabe) hoia jabe

    for(auto value : s){
        cout<<value<<" ";
    }
    cout<<'\n';
    cout<<s.count(9)<<'\n'; //9 2 bar ase


    return 0;
}

//multiset a sorasori erase korleee joto duplicate  value ase sob muse jai,,bt jody find kor nia then erase kora hoi taile matro 1 ta value erase ba delete hoia jaigi