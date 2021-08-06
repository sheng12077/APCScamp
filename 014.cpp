#include<bits/stdc++.h>
using namespace std;

queue <int> cardque;
vector <int> ansvec;
int n,q,o;



signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for (int i=1;i<=n;i++){
        cardque.push(i);
    }
    for (int i=0;i<n;i++){
        ansvec.push_back(cardque.front());
        cardque.pop();
        cardque.push(cardque.front());
        cardque.pop();
    }
    cin>>q;
    for (int i=0;i<q;i++){
        cin>>o;
        cout<<ansvec[o-1]<<"\n";
    }
}
