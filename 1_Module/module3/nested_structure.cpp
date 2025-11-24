#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<vector<int>,int>mp;

    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    mp[v]=5;

    for(auto [x,y] : mp){
        vector<int>v =x;
        for(auto value : v){
            cout<<value<< " ";
        }
        cout<<'\n';
        cout<<y<<'\n';
    }
    
    return 0;
}

