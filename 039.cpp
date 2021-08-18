#include<bits/stdc++.h>
using namespace std;

signed main(){
    long long N;
    cin>>N;
    vector<long long> vec;
    for (int i=1;(long long) i*i<=N;i++){
        if (N%i==0){
            vec.push_back(i);
            if (i*i!=N){
                vec.push_back(N/i);
            }
        }
    }
    sort(vec.begin(),vec.end());
    for (int i=0;(long long) i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
