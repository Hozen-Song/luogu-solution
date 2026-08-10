#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cin >> s;
    int num[11];
    int cnt = 1;
    for(int i = 0; i < 13; i++){
        if(s[i] == '-'){
            continue;
        }
        num[cnt] = s[i] - '0';
        cnt++;
    }
    int sum = 0;
    for(int i = 1; i <= 9; i++){
        sum += num[i] * i;
    }
    int code;
    if(s[12] == 'X'){
        code = 10;
    }else{
        code = s[12] - '0';
    }
    if(sum % 11 == code){
        cout << "Right" << endl;
    }else{
        if(sum % 11 == 10){
            s[12] = 'X';
        }else{
            s[12] = sum % 11 + '0';
        }
        cout << s << endl;
    }
    return 0;
}

