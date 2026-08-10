#include<iostream>
using namespace std;
void print_num(int n){
    if(n <= 9){
        cout << 0 << n;
    }else{
        cout << n;
    }
    return;
}
int main(){
    int n;
    int cnt = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++){
            print_num(cnt);
            cnt++;
        }
        cout << endl;
    }
    return 0;
}