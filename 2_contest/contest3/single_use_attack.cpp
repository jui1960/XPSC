#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int h,x,y;
        cin>>h>>x>>y;
        if(h<=y){
            cout<<1<<'\n';
            continue;
        }

        int ans = (h+x-1)/x;
        int remain = h-y;
        int need = (remain + x -1)/x;
        int sp = need + 1;

        // int ans = h - y;
        // int sp = ans + 1;

        cout<<min(ans,sp)<<'\n';

        
        
    }
    
    return 0;
}
