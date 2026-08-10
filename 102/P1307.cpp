#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string N;
    int ans[13] = {0};
    cin >> N;
    if(N == "0"){
        cout << 0 << endl;
        return 0;
    }

    int index = 0;
    if(N[0] == '-'){
        index++;
        cout << "-";
    }
    for(int i = index; i < N.length(); i++){
        ans[i - index] = N[i] - '0';
    }
    bool flag = false;//表示有没有扫到非零数字
    for(int i = N.length() - 1; i >= 0; i--){
        if(ans[i] != 0){
            flag = true;
        }
        if(flag){
            cout << ans[i];
        }
    }
    cout << endl;
    return 0;
}