#include<bits/stdc++.h>
using namespace std;

signed main(){
    stack<int> st;
    vector<int> heights;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int k;
        cin>>k;
        heights.push_back(k);
    }
    heights.insert(heights.begin(),0);                   // 將元素 0 添加到數組的頭部
    heights.push_back(0);                                // 數組尾部加入元素0
    st.push(0);
    long long result=0;                                  //開long long 不然會爆
    for (long long i=1;i<heights.size();i++) {           //第0元素已經入stack，從第1個開始
        while (heights[i]<heights[st.top()]){            //注意heights[i] 是和heights[st.top()] 比較
            long long mid=st.top();
            st.pop();
            long long w=i-st.top()-1;
            long long h=heights[mid];
            result=max(result,w*h);
        }
        st.push(i);
    }
    cout<<result;
}
