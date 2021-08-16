#include<bits/stdc++.h>
using namespace std;
#define OAO 998244353

int F(long long x){
    return ((2*x-3)%OAO+OAO)%OAO;     //必正數  騷操作
}

int G(long long x,long long y){
    return ((2*x+y-7)%OAO+OAO)%OAO;
}

int H(long long x,long long y,long long z){
    return ((3*x-2*y+z)%OAO+OAO)%OAO;
}

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<string> vec;
    stack<long long>stk;
    for (int i=0;i<n;i++){
        string s;
        cin>>s;
        vec.push_back(s);
    }
    for (int i=n-1;i>-1;i--){
        if (vec[i]=="f"){
            int a;
            a=stk.top();
            stk.pop();
            stk.push(F(a));
        }
        else if (vec[i]=="g"){
            int a,b;
            a=stk.top();
            stk.pop();
            b=stk.top();
            stk.pop();
            stk.push(G(a,b));
        }
        else if(vec[i]=="h"){
            int a,b,c;
            a=stk.top();
            stk.pop();
            b=stk.top();
            stk.pop();
            c=stk.top();
            stk.pop();
            stk.push(H(a,b,c));
        }
        else{
            int tmp;
            tmp=stoi(vec[i]);
            stk.push(tmp);
        }
    }
    cout<<stk.top()<<"\n";
}
//⠄⠄⠄⠄⠄⠄⠄⠈⠉⠁⠈⠉⠉⠙⠿⣿⣿⣿⣿⣿
//⠄⠄⠄⠄⠄⠄⠄⠄⣀⣀⣀⠄⠄⠄⠄⠄⠹⣿⣿⣿
//⠄⠄⠄⠄⠄⢐⣲⣿⣿⣯⠭⠉⠙⠲⣄⡀⠄⠈⢿⣿
//⠐⠄⠄⠰⠒⠚⢩⣉⠼⡟⠙⠛⠿⡟⣤⡳⡀⠄⠄⢻
//⠄⠄⢀⣀⣀⣢⣶⣿⣦⣭⣤⣭⣵⣶⣿⣿⣏⠄⠄⣿
//⠄⣼⣿⣿⣿⡉⣿⣀⣽⣸⣿⣿⣿⣿⣿⣿⣿⡆⣀⣿
//⢠⣿⣿⣿⠿⠟⠛⠻⢿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣼
//⠄⣿⣿⣿⡆⠄⠄⠄⠄⠳⡈⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⠄⢹⣿⣿⡇⠄⠄⠄⠄⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
//⠄⠄⢿⣿⣷⣨⣽⣭⢁⣡⣿⣿⠟⣩⣿⣿⣿⠿⠿⠟
//⠄⠄⠈⡍⠻⣿⣿⣿⣿⠟⠋⢁⣼⠿⠋⠉⠄⠄⠄⠄
//⠄⠄⠄⠈⠴⢬⣙⣛⡥⠴⠂⠄⠄⠄⠄⠄⠄⠄⠄⠄
