#include<iostream>
using namespace std;
int num[21][21];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        num[i][1] = 1;
        num[i][i] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(!num[i][j]){
                num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
            }
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}