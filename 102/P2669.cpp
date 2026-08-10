#include<iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    int cnt = 1;
    int flag = 0;
    int answer = 0;
    for(int i = 1; i <= k; i++){
        answer += cnt;
        flag++;
        if(flag == cnt){
            cnt++;
            flag = 0;
        }
    }
    cout << answer << endl;
    return 0;
}