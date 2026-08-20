//#define debug
//#define debug2
#include<iostream>
#include<cmath>
using namespace std;
int dig[10];
int num = 0;
int EdgeL, EdgeR;
int length; //这个用来存（最终要生成的回文数的位数+1）/2
int coefficient = 1;
void IsPrime(){
    //Compute
    num = 0;
    coefficient = 1;
    for(int i = (length + 1) / 2; i >= 1; i--){
        num += dig[i] * coefficient;
        coefficient *= 10;
    }
    if(length % 2 == 0){
        num += dig[1] * coefficient;
        coefficient *= 10;
    }
    for(int i = 2; i <= (length + 1) / 2; i++){
        num += dig[i] * coefficient;
        coefficient *= 10;
    }
    #ifdef debug
    cout << num << endl;
    #endif

    if(num < EdgeL || EdgeR < num){
        return;
    }

    bool flag = true;
    for(int i = 2; i <= sqrt(num); i++){
        if(num * 1.0 / i == num / i){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << num << endl;
    }
    return;
}
void Palindromes(int len){ //这里的len是（当前函数需要生成的回文数的位数 + 1） / 2
    if(len == 0){
        IsPrime(); //这个函数包括了判断和输出；
        return;
    }
    for(int i = 0; i <= 9; i++){
        if(len == (length + 1) / 2 && i == 0){
            continue; //避免首位是1
        }
        if(len == (length + 1) / 2 && i % 2 == 0){
            continue;
        }
        dig[len] = i;
        Palindromes(len - 1);
    }
    return;
}

int main(){
    cin >> EdgeL >> EdgeR; 
    for(int i = 1; i <= 8; i++){
        length = i;
        Palindromes((i + 1) / 2);
    }
    #ifdef debug2
    dig[1] = 5;
    dig[2] = 3;
    dig[3] = 4;
    dig[4] = 1;
    for(int i = 1; i <= 8; i++){
        length = i;
        IsPrime();
    }
    #endif
    return 0;
}