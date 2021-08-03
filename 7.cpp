#include<iostream>
using namespace std;

int main(){
    bool flag=true;
    int k;
    long long n;
    long long c=2;
    cin>>k;
    for (int i=1;i<=k;i++){ 
        cin>>n;
        if (n<2){
            cout<<"NO"<<endl;
            continue;
        }
        while (c*c<=n){ 
            if (n%c==0){
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
             c+=1;
        }
    if (flag){ 

        cout<<"YES"<<endl;
    }
    c=2;
    flag=true;
    }
}

