#include <bits/stdc++.h>
using namespace std;
#define int long long  

pair<int,int>a[1005];                       //pair int int array

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        a[i].second=-a[i].second;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        a[i].second=-a[i].second;
    }
    int ans=1;
    int mx=a[0].second;
    int last=a[0].second;
    bool touch=0;
    for(int i=0;i<n;i++){
        if(a[i].first>last+1){
            if(a[i].first>mx+1){
                cout<<-1<<"\n";
                exit(0);
            }
            else{
                last=mx;
                touch=false;
            }
        }
        if(!touch and a[i].second>last){
            touch=true;
            ans++;
        }
        mx=max(a[i].second,mx);

    }
    cout<<ans<<"\n";
}
