#include<bits/stdc++.h>
#include<utility>
using namespace std;

queue <int> que;
int n,m,inputval;

signed main(){
    cin>>m;
    for (int i=1;i<=m;i++){
        cin>>n;
        if (n==1){
            cin>>inputval;
            que.push(inputval);
        }
        else if (n==2){
            if (que.empty()){
                cout<<"QQ"<<endl;
            }
            else{
                que.pop();
            }
        }
        else if (n==3){
            if (que.empty()){
                cout<<"QQ"<<endl;
            }
            else{
                cout<<que.front()<<endl;
            }
        }
        else{
            cout<<que.size()<<endl;
        }
    }
    return 0;
}
