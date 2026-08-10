#include<iostream>
using namespace std;
int main(){//这题本质上只有可能有15种输入，所以理论上甚至可以手玩全部情况然后直接用if输出对应结果
    int k;
    cin >> k;
    double Sn = 0;
    int n = 1;
    while(true){
        Sn += 1.0 / n;
        if(Sn > k){
            cout << n << endl;
            break;
        }
        n++;
    }
    return 0;
}