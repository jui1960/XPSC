#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int result = (x*y);
        int time = z*24*60;
        // int finl = result/time;
        // cout<<result<<endl;
        if(result <= time)
            cout<<"YES"<<'\n';
        else
            cout<<"No"<<'\n';
    }
    return 0;
}