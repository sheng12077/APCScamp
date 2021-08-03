#include<bits/stdc++.h>
#include<utility>
using namespace std;

int n,m,inputval;
stack<int> stack1;

signed main(){
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>n;
        if (n==1){
            cin>>inputval;
            stack1.push(inputval);
        }
        else if (n==2){
            if (stack1.empty()){
                cout<<"QQ"<<endl;
            }
            else{
                stack1.pop();
            }
        }
        else if (n==3){
            if (stack1.empty()){
                cout<<"QQ"<<endl;
            }
            else{
                cout<<stack1.top()<<endl;
            }
        }
        else{
            cout<<stack1.size()<<endl;
        }
    }
    return 0;
}


