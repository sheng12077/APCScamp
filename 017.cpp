#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    string s;
    for (int i=0;i<n;i++){
        stack <char> stkL;
        stack <char> stkR;
        cin>>s;
        for (int j=0;j<s.size();j++){
            if (s[j]=='('){
                stkL.push(s[j]);
            }
            else{
                if (!stkL.empty()){
                    stkL.pop();
                }
                else{
                    stkR.push(s[j]);
                }
            }
        }
        if (stkL.empty() and stkR.empty()){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
}
