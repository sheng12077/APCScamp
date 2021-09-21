#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int>ans;
vector<int>vec;
int lis(){
    for(int i=0;i<vec.size();i++){
        int j=upper_bound(ans.begin(),ans.end(),vec[i])-ans.begin();
        if(j>=ans.size()){
            ans.push_back(vec[i]);            //j>前面所有的，直接往後丟(length++)
        }
        else{
            ans[j]=vec[i];                    //更新某長度的最小結尾
        }                             
    }
    return ans.size();
}

pair<int,int>a[200001];                        //存位置
signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        vec.push_back(a[i].second);
    }
    cout<<lis();
}
