#include<iostream>
using namespace std;
bool map[110][110] = {false};
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        x++;
        y++; //将盘面整体向右上移动一格，防止边角的火把和萤石出现下标越界
        map[x][y] = true;
        map[x][y + 1] = true;
        map[x][y + 2] = true;
        map[x][y - 1] = true;
        map[x][y - 2] = true;
        map[x - 2][y] = true;
        map[x - 1][y] = true;
        map[x + 1][y] = true;
        map[x + 2][y] = true;
        map[x - 1][y - 1] = true;
        map[x - 1][y + 1] = true;
        map[x + 1][y - 1] = true;
        map[x + 1][y + 1] = true;
    }
    for(int i = 1; i <= k; i++){
        cin >> x >> y;
        x++;
        y++;
        for(int j = x - 2; j <= x + 2; j++){
            for(int k = y - 2; k <= y + 2; k++){
                map[j][k] = true;
            }
        }
    }
    int cnt = 0;
    for(int i = 2; i <= n + 1; i++){
        for(int j = 2; j <= n + 1; j++){
            if(!map[i][j]){
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}