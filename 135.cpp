#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int n,w;
int weight[102];
int cost[102];
int dp[100002]={0};

signed main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>weight[i]>>cost[i];
    }
    for(int i=0;i<n;i++){
        for(int j=w;j>0;j--){
            if(j-weight[i]>=0){
                dp[j]=max(dp[j],dp[j-weight[i]]+cost[i]);
            }
        }
    }
    cout<<dp[w]<<endl;
}
