//#define debug
#include<iostream>
using namespace std;
char ori_map[11][11];
char tar_map[11][11];
char trial_map[11][11];
char middle_map[11][11];
int n;
void Change(int order, int x, int y){
    if(order == 1){
        trial_map[x][y] = ori_map[n + 1 - y][x];
    }else if(order == 2){
        trial_map[x][y] = ori_map[n + 1 - x][n + 1 - y];
    }else if(order == 3){
        trial_map[x][y] = ori_map[y][n + 1 - x];
    }else if(order == 4){
        trial_map[x][y] = ori_map[x][n + 1 - y];
    }
    return;
}
void Change2(int order, int x, int y){
    if(order == 1){
        trial_map[x][y] = middle_map[n + 1 - y][x];
    }else if(order == 2){
        trial_map[x][y] = middle_map[n + 1 - x][n + 1 - y];
    }else if(order == 3){
        trial_map[x][y] = middle_map[y][n + 1 - x];
    }
    return;
}
bool Check(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(trial_map[i][j] != tar_map[i][j]){
                return false;
            }
        }
    }
    return true;
} 
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> ori_map[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> tar_map[i][j];
        }
    }
    
    //check method 1-4
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                  Change(i, j, k);
            }
        }
        #ifdef debug
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                cout << trial_map[j][k] << " ";
            }
            cout << endl;
        }
        #endif
        if(Check()){
            cout << i << endl;
            return 0;
        }
    }

    //check method 5
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            middle_map[i][j] = trial_map[i][j];
        }
    }
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                  Change2(i, j, k);
            }
        }
        #ifdef debug
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                cout << trial_map[j][k] << " ";
            }
            cout << endl;
        }
        #endif
        if(Check()){
            cout << 5 << endl;
            return 0;
        }
    }

    //check method 6
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            trial_map[i][j] = ori_map[i][j];
        }
    }
    if(Check()){
        cout << 6 << endl;
        return 0;
    }


    cout << 7 << endl;
    return 0;
}