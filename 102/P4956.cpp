//正确题意是：如果有多个解决方案，输出X最大的那个
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int N;
    cin >> N;

    int x = 100;
    while(true){
        if((N - 364 * x) / 1092 > 0 && (N - 364 * x) % 1092 == 0){
            cout << x << endl;
            cout << (N - 364 * x) / 1092 << endl;
            break;
        }else{
            x--;
        }
    }
    return 0;
}