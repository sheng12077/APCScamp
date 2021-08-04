#include<bits/stdc++.h>
#include<utility>
using namespace std;

set <int> S;
int m,n,c;

signed main(){
    cin>>m;
    for (int i=1;i<=m;i++){
        cin>>n;
        if (n==1){
            cin>>c;
            S.insert(c);
        }
        else if (n==2){
            cin>>c;
            if (S.count(c)){
                S.erase(c);
            }
            else{
                cout<<"error"<<endl;
            }
        }
        else if (n==3){
            cout<<S.size()<<endl;
        }
        else if (n==4){
            if (S.empty()){
                cout<<"error"<<endl;
            }
            else{
                cout<<*S.begin()<<endl;
            }
        }
        else{
            if (S.empty()){
                cout<<"error"<<endl;
            }
            else{
                cout<<*prev(S.end())<<endl;    
            }
        }
    }
}


//S.end要加*   ，因為 .end()是指標    (iterator)
            
//line41  *prev(S.end())    because end() 是 null    

 

