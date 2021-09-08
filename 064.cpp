#include<bits/stdc++.h>
using namespace std;
#define int long long 

int n,k;
int coin[15];
signed main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    int ans=0;
    for (int i=n-1;i>=0;i--){
        ans+=k/coin[i];
        k%=coin[i];
    }
    cout<<ans;
}
