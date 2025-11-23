#include <bits/stdc++.h>
using namespace std;

// piroty_queue sorted and duplicatte value rakhe..
//  2 ta type - 1.min heap(Non decressing(1,1,2,4,4,7,8))
//  2.max heap (non incressing(6,6,5,3,2,1))
// push and pop er complexity 0(log n)
// top,size,empty() er complexity 0(1)

// non
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  //non incressing (boro theke soto)
    //  priority_queue<int>pq;

    //  pq.push(5);
    //  pq.push(2);
    //  pq.push(1);
    //  pq.push(4);
    //  pq.push(6);

    //  cout<<pq.top()<<" "<<'\n';
    //  pq.pop();
    //  cout<<pq.top()<<" "<<'\n';
    //  cout<<"size-> "<<pq.size()<<" "<<'\n'; // 5 ta push korsi,,1 ta delete marsi tai size 4

    //  if(!pq.empty()){
    //     cout<<"not empty"<<" "<<'\n';
    //  }
    //  else{
    //     cout<<"emtpty"<<'\n';
    //  }

    
    // while (!pq.empty())
    // {
    //     int value = pq.top();
    //     pq.pop();

    //     cout << value << " " << '\n';
    // }

    // non decressing (soto theke boro)
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(2);
    pq.push(1);
    pq.push(4);
    pq.push(6);

     cout<<pq.top()<<" "<<'\n';
     pq.pop();
     cout<<pq.top()<<" "<<'\n';
     cout<<"size-> "<<pq.size()<<" "<<'\n'; // 5 ta push korsi,,1 ta delete marsi tai size 4

     if(!pq.empty()){
        cout<<"not empty"<<" "<<'\n';
     }
     else{
        cout<<"emtpty"<<'\n';
     }

    while (!pq.empty())
    {
        int value = pq.top();
        pq.pop();

        cout << value << " " << '\n';
    }
    return 0;
}
