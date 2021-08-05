#include<bits/stdc++.h>
using namespace std;

deque<int> deq;
int N,O,X;


    

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    cin>>N;
    for (int i=1;i<=N;i++){
        cin>>O;
        if (O==1){
            cin>>X;
            deq.push_back(X);
        }
        else if (O==2){
            cin>>X;
            deq.push_front(X);
        }
        else if (O==3){
            if (deq.empty()){
                cout<<"error"<<"\n";
            }
            else{
                cout<<deq.back()<<"\n";
            }
        }
        else if (O==4){
            if (deq.empty()){
                cout<<"error"<<"\n";
            }
            else{
                cout<<deq.front()<<"\n";
            }
        }
        else if (O==5){
            if (deq.empty()){
                cout<<"error"<<"\n";
            }
            else{
                deq.pop_back();
            }
        }
        else if (O==6){
            if (deq.empty()){
                cout<<"error"<<"\n";
            }
            else{
                deq.pop_front();
            }
        }
        else{
            cout<<deq.size()<<"\n";
        }
    }
}
