#include <iostream>
#include <queue>
#include <utility>
#define MAXN 510


using namespace std;
bool man[MAXN][MAXN] = {false};
bool reach[MAXN][MAXN] = {false};
int ans[MAXN][MAXN] = {0};


bool ok(int x, int y, int n, int m){
    if(x < 0 || x >= n || y < 0 || y >= m || reach[x][y] || !man[x][y])
        return false;
    return true;
}


int main(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    char now;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> now;
            man[i][j] = (now == 'X') ? false : true; 
        }
    }


    pair<int, int> first(x - 1, y - 1);
    ans[x - 1][y - 1] = 0;
    reach[x - 1][y - 1] = true;
    
    queue<pair<int, int>> cors;
    cors.push(first);
    while(!cors.empty()){
        pair<int, int> now = cors.front();
        cors.pop();
        if(ok(now.first + 1, now.second, n, m)){
            ans[now.first + 1][now.second] = ans[now.first][now.second] + 1;
            reach[now.first + 1][now.second] = 1;
            pair<int, int> news (now.first + 1, now.second);
            cors.push(news);
        }
        if(ok(now.first - 1, now.second, n, m)){
            ans[now.first - 1][now.second] = ans[now.first][now.second] + 1;
            reach[now.first - 1][now.second] = 1;
            pair<int, int> news (now.first - 1, now.second);
            cors.push(news);
        }
        if(ok(now.first, now.second + 1, n, m)){
            ans[now.first][now.second + 1] = ans[now.first][now.second] + 1;
            reach[now.first][now.second + 1] = 1;
            pair<int, int> news (now.first, now.second + 1);
            cors.push(news);
        }
        if(ok(now.first, now.second - 1, n, m)){
            ans[now.first][now.second - 1] = ans[now.first][now.second] + 1;
            reach[now.first][now.second - 1] = 1;
            pair<int, int> news (now.first, now.second - 1);
            cors.push(news);
        }        


    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(reach[i][j])
                cout << ans[i][j];
            else
                cout << "-1";
            if(j == m - 1)
                cout << "\n";
            else 
                cout << " ";
        }
    }
    return 0;
}
