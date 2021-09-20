#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int m;
	cin>>m;
	priority_queue<int>pq;
	for(int i=0;i<m;i++){
		int o;            //operation
		cin>>o;
		if(o==1){
			int k;
			cin>>k;
			pq.push(k);
		}
		else if(o==2){
			if(pq.empty()){
				cout<<"QQ"<<"\n";
			}
			else{
				pq.pop();
			}
		}
		else if(o==3){
			if(pq.empty()){
				cout<<"QQ"<<"\n";
			}
			else{
				cout<<pq.top()<<"\n";
			}
		}
		else{
			cout<<pq.size()<<"\n";
		}
	}
}
