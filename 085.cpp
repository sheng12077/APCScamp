#include <bits/stdc++.h>
using namespace std;
#define int long long

vector <int> tree[100005];
int a[100005];

int n;
void dfs(int now,int pre){
    for(auto i:tree[now]){
        if(i!=pre){                  //if i==pre(上次搜過的點)--->就不要再跑一次
            a[i]=a[now]+1;
            dfs(i,now);
        }
    }
}

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

    while(cin>>n){
        for(int i=0;i<n;i++){
            tree[i].clear();
            a[i]=0;
        }                              //initialize
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            tree[a].push_back(b);
            tree[b].push_back(a);
        }
        dfs(0,-1);
        int idx=0,mx=0;
        for (int i=0;i<n;i++){
            if (a[i]>mx){
                mx=a[i];
                idx=i;
            }
        }
        for (int i=0;i<n;i++){
            a[i]=0;
        }
        dfs(idx,-1);
        cout<<*max_element(a,a+n)<<"\n";
    }
}
