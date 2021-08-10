#include<bits/stdc++.h>
using namespace std;


int n,m,k;


signed main(){
    cin>>n;
    cin>>m;
    for (int j=0;j<m;j++){
        queue<int> que;
        stack<int> stk,stk2;
        for (int i=0;i<n;i++){
            stk.push(n-i);
            cin>>k;
            que.push(k);
        }
        while(!stk.empty()){
            while (!stk.empty() && stk.top() == que.front()){
                stk.pop();
                que.pop();
            }
            if(!stk.empty()) stk2.push(stk.top()), stk.pop();
            while (!stk2.empty() && stk2.top() == que.front()){
                stk2.pop();
                que.pop();
            }
        }
        if (que.empty()){
            cout<<"Y"<<"\n";
        }
        else{
            cout<<"N"<<"\n";
        }
    }
}
