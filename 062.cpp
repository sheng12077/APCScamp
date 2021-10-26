#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>vec;
    int ans=0;
    int prefix=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vec.push_back(k);
    }
    sort(vec.begin(),vec.end());
    for(int i:vec){
        ans+=(i+prefix);
        prefix+=i;
    }
    cout<<ans;
}
