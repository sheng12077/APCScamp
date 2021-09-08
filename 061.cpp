#include<bits/stdc++.h>
using namespace std;

int a[30][30];

signed main(){
    int n,m;
    cin>>n>>m;
    int sum=0;
    for (int i=0;i<n;i++){
        int max_value=0;
        for (int j=0;j<m;j++){
            cin>>a[i][j];  
            max_value=max(a[i][j],max_value); 
        }
        sum+=max_value;
    }
    cout<<sum<<'\n';
    bool print_flag=false;
    for (int i=0;i<n;i++){
        int max_value=0;
        for (int j=0;j<m;j++){
            max_value=max(a[i][j],max_value); 
        }
        if(sum%max_value==0){
            print_flag=true;
            cout<<max_value<<" ";
        }
    }
    if(print_flag==false){
        cout<<-1;
    }
}
