#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node* nxt;
};


node *head[108], *tail[108];


void push(int x,int j){
    node* nd = new node;
    nd->data = j;
    nd->nxt = NULL;
    if(head[x]){
        tail[x]->nxt = nd;
        tail[x] = nd;
    }
    else{
        head[x] = tail[x] = nd;
    }
}


void join(int x,int y){       // x <- y
    if(!head[x]) head[x] = head[y], tail[x] = NULL;
    else tail[x]->nxt = head[y];
    if(tail[y]) tail[x] = tail[y];
    head[y] = tail[y] = NULL;
}


int pop(int x){
    if(head[x]){
        int t = head[x]->data;
        head[x] = head[x]->nxt;
        if(head[x] == NULL) tail[x] = NULL;
        return t;
    }
    return -1;
}


string s;
int n,m,l,x,l1,l2,ans;


signed main(){


    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin>>n;
    cin>>m;
    for (int i=0;i<m;i++){
        cin>>s;
        if (s=="ADD"){
            cin>>l;
            cin>>x;
            push(l,x);
        }
        else if(s=="LEAVE"){
            cin>>l;
            ans=pop(l);
            if (ans==-1){
                cout<<"queue "<<l<<" is empty!"<<"\n";            
            }
        }
        else{
            cin>>l1;
            cin>>l2;
            join(l2,l1);
        }
    }
    for (int i=1;i<=n;i++){
        cout<<"queue "<<i<<": ";
        int ans = pop(i);
        if (ans==-1){
            cout<<"empty"<<"\n";
        }
        else{
            do {
                cout << ans <<' ';
                ans = pop(i);
            }
            while(ans != -1);
            cout<<"\n";
        }
    }
}
