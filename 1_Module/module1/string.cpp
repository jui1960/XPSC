#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>>n;
    string s;
    cin>> s;
    for(int i = 0; i<n;i++){
        int x;
        cin>>x;
        s.push_back(x);
    }
    s.pop_back();
    
    cout<<s << s.front() <<endl;
    cout<<s.empty()<<endl;
    


    //substring 
    cout<<s.substr(1,3)<<endl;
    cout<<s.substr(1);

    return 0;
}