#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // map<vector<int>,int>mp;

    // vector<int>v;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(7);
    // v.push_back(9);
    // v.push_back(0);

    // mp[v]=5;

    // for(auto [x,y] : mp){
    //     vector<int>c =x;
    //     for(auto value : c){
    //         cout<<value<< " "<<y<<'\n';
    //     }
    //     // cout<<'\n';
    //     cout<<y<<'\n';
    // }

    map<int, set<int>> mp;
    set<int> s1;
    s1.insert(2);
    s1.insert(5);
    s1.insert(2);

    set<int> s2;
    s2.insert(9);
    s2.insert(5);
    s2.insert(4);

    set<int> s3;
    s3.insert(12);
    s3.insert(1);
    s3.insert(6);
    s3.insert(8);

    mp[5] =s1;
    mp[7] =s2;
    mp[10] =s3;

    for(auto [x,y] :mp){
        cout<<x<<"-> ";
        for(auto val:y){
            cout<<val<<" ";
        }
        cout<<'\n';
    }

    return 0;
}
