#include<iostream>
using namespace std;
int num[10][10] = {0};
int dir[4][2] = {
    {1, 0},
    {0, 1},
    {-1, 0},
    {0, -1}
};
int dir_tag = 0;//表示现在往哪边走

void output(int n){
    if(n < 10){
        cout << "  " << n;
    }else if(n > 100){
        cout << n;
    }else{
        cout << " " << n;
    }
    return;
}

int main(){
    int n;
    cin >> n;
    int x = 1, y = 1;  //表示当前位置
    for(int i = 1; i <= n * n; i++){
        num[x][y] = i;
        if(num[x + dir[dir_tag][0]][y + dir[dir_tag][1]] || x + dir[dir_tag][0] == 0 || x + dir[dir_tag][0] == n + 1 || y + dir[dir_tag][1] == n + 1){
            dir_tag = (dir_tag + 1) % 4;
        }//转向
        x += dir[dir_tag][0];
        y += dir[dir_tag][1];//移动
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            output(num[j][i]);
        }
        cout << endl;
    }
    return 0;
}