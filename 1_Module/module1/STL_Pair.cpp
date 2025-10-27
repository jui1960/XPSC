#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // pair<string,int>student={"jannati",82}; 
    // cout<<student.first<< " "<<student.second;

    // pair<string,int>student = make_pair("jui",82); rule 2

    // pair<string,int>student={"jannati",82}; 

    // pair<string,int>student={"jannati",82}; 
    // auto[name,roll]=student;
    // cout<< name << " "<<roll;


    // int n;
    // cin>>n;
    // pair<string,int>student[n];
    // for(int i = 0;i<n;i++){
    //     cin>>student[i].first>>student[i].second;
    // }    
    
    // for(auto [x,y] : student){
    //     cout<<x<<" "<<y<<endl;

    // }


    pair<string, pair<int,string>> p = {"jui",{7,"jui"}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
    
    return 0;
}