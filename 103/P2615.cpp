//#define test
#include<iostream>
using namespace std;
int n;
int num[40][40] = {0};
int x[1600], y[1600];
void operate(int number, int a, int b){
    num[a][b] = number;
    x[number] = a;
    y[number] = b;
}
void print(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
    return;
}
int main(){
    cin >> n;
    operate(1, 1, (n + 1) / 2);
    #ifdef test
    print();
    cout << endl;
    #endif
    for(int i = 2; i <= n*n; i++){
        if(x[i - 1] == 1 && y[i - 1] != n){
            operate(i, n, y[i - 1] + 1);
        }else if(x[i - 1] != 1 && y[i - 1] == n){
            operate(i, x[i - 1] - 1, 1);
        }else if(num[1][n] == i - 1){
            operate(i, x[i - 1] + 1, y[i - 1]);
        }else{
            if(num[x[i - 1] - 1][y[i - 1] + 1] == 0){
                operate(i, x[i - 1] - 1, y[i - 1] + 1);
            }else{
                operate(i, x[i - 1] + 1, y[i - 1]);
            }
        }
        #ifdef test
        print();
        cout << endl;
        #endif
    }
    print();
    return 0;
}