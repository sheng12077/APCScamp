#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		priority_queue<int>pq;
		deque<pair<int,int>>deq;    //pair第一個是優先級 第二個是序號
		int pos=0;                    //position
		for(int i=0;i<n;i++){
			int p;
			cin>>p;
			pq.push(p);
			deq.push_back(make_pair(p,pos));
			pos++;
		}
		int ans=0;
		bool flag=true;
		while(flag){
			int top=pq.top();
			pq.pop();
			while(deq.front().first!=top){
				pair<int,int>tmp=deq.front();
				deq.pop_front();
				deq.push_back(tmp);             //有更優先的
			}
			if(deq.front().second==m){
				ans++;
				flag=false;                     //輪到自己
			}
			else{
				deq.pop_front();
				ans++;                         //沒更優先的，也不是自己
			}                    
		}
		cout<<ans<<"\n";
	}
}
