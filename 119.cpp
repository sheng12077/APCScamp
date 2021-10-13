#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int n;
int num;
vector<int> vec;

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>num;
        if (vec.empty())vec.emplace_back(num);
        else if(!vec.empty() && num>vec.back()) vec.emplace_back(num);
        else 
        {
            auto k = lower_bound(vec.begin(), vec.end(), num);
            *k = num;
        }  
    }
    cout<<vec.size();
}
