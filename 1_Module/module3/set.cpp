#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    set<int>s;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    auto it = s.begin();
    cout<<*it<<'\n';

    
    //set short value rakhe...20 9 6 200 9 4 ,,
    //akn eitar begin() ber korte chaile 4 ashbe



    
}