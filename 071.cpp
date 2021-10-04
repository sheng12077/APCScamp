#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool compare(pair<int,int>A,pair<int,int>B){
    return A.second<B.second;
}

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++){
        int s,e;
        cin>>s>>e;
        vec.push_back(make_pair(s,e));
    }
    sort(vec.begin(),vec.end(),compare);
    int now=0;
    int ans=0;
    for(auto i:vec){
        if(i.first>=now){
            ans++;
            now=i.second;
        }
    }
    cout<<ans;
}
