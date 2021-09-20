#include<bits/stdc++.h>
using namespace std;
 
int n,q,l,j,l1,l2;
string s;


signed main(){


    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin>>n;
    vector<deque<int>> data(n+1);               //queue in a line (n means the number of the line)     n+1:第0個deque是空的，因為輸入沒有0
    cin>>q;
    for (int i=0;i<q;i++){
        cin>>s; 
        if (s=="ADD"){
            cin>>l>>j;
            data[l].push_back(j);              //在deque中加元素
        }
        else if (s=="LEAVE"){
            cin>>l;
            if (data[l].empty())
                cout<<"queue "<<l<<" is empty!\n";       //空的時候輸出
            else
                data[l].pop_front();               //把deque中的front pop掉
        }
        else{
            cin>>l1>>l2;
            if(data[l1].size() > data[l2].size()){
                while (! data[l2].empty()){                     //把l1加到l2
                    data[l1].push_front(data[l2].back());       //front 會改變
                    data[l2].pop_back();                       //清空l1
                }    
                data[l2].swap(data[l1]);
            }
            else {
                while (! data[l1].empty()){                     //把l1加到l2
                    data[l2].push_back(data[l1].front());       //front 會改變
                    data[l1].pop_front();                       //清空l1
                }    
            }
        } 
    }
    for (int i=0;i<n;i++){
        if (data[i+1].empty())
            cout<<"queue "<<i+1<<": empty"<<"\n";
        else{
            cout<<"queue "<<i+1<<": ";
            for (int j=0;j<data[i+1].size();j++)
                cout<<data[i+1][j]<<" ";
                cout<<"\n";
        }
    }
}
