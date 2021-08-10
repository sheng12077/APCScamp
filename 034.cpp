#include<bits/stdc++.h>
using namespace std;


set<int> s;
int n,k,a;


signed main(){
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>k;
        if (k==1){
            cin>>a;
            s.insert(a);
        }
        else if (k==2){
            if (s.empty()){
                cout<<"done"<<"\n";
            }
            else{
                cout<<*s.begin()<<"\n";
                s.erase(s.begin());
            }
        }
        else{
            if (s.empty()){
                cout<<"done"<<"\n";
            }
            else{
                cout<<*prev(s.end())<<"\n";
                s.erase(prev(s.end()));
            }
        }
    }
}
