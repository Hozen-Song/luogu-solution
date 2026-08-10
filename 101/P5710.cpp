#include<iostream>
using namespace std;
int main(){
    int x;
    bool flag1 = false, flag2 = false;
    cin >> x;
    if(x % 2 == 0){
        flag1 = true;
    }
    if(x > 4 && x <= 12){
        flag2 = true;
    }

    if(flag1 && flag2){
        cout << 1 << " " << 1 << " " << 0 << " " << 0 << endl;
    }else if(flag1 && !flag2){
        cout << 0 << " " << 1 << " " << 1 << " " << 0 << endl;
    }else if(!flag1 && flag2){
        cout << 0 << " " << 1 << " " << 1 << " " << 0 << endl;
    }else{
        cout << 0 << " " << 0 << " " << 0 << " " << 1 << endl;
    }
    return 0;
}