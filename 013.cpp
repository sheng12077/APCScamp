#include<bits/stdc++.h>
using namespace std;


int T,N,Q,O,J,K,Xj;                    
//T執行次數(天數)   N小圈圈數   Q操作數    O操作編號   J加入的人   k此小圈圈人數   Xj該人編號                
vector<int> group_vector(1000001);
deque<int> queuing_condition;
queue<int> q[100001];


signed main(){  


    cin>>T;                                   //執行次數
    for (int i=1;i<=T;i++){
        cin>>N;                               //輸入小圈圈數
        cin>>Q;                               //輸入操作數
        for (int j=1;j<=N;j++){    
            cin>>K;                           //輸入此小圈圈人數
            for (int s=1;s<=K;s++){
                cin>>Xj;                      //輸入該人編號                      
                group_vector[Xj]=j;
            }    
        }
        for (int a=1;a<=Q;a++){
            cin>>O;
            if (O==1){
                cin>>J;
                if(q[group_vector[J]].empty())
                    queuing_condition.push_back(group_vector[J]);
                q[group_vector[J]].push(J);
            }
            else{
                if (queuing_condition.empty()){
                    cout<<"-1"<<endl;
                }
                else{
                    cout<<q[queuing_condition.front()].front()<<endl;
                    q[queuing_condition.front()].pop();
                    if (q[queuing_condition.front()].empty()){
                        queuing_condition.pop_front();
                    }
                }
            }
        }
        while(!queuing_condition.empty()) {
            while(!q[queuing_condition.front()].empty())
                q[queuing_condition.front()].pop();
            queuing_condition.pop_front();
        }
    }
}  
