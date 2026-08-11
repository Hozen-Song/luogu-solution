#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int ans[10] = {0};
    int prize[10];
    int n;
    cin >> n;
    for(int i = 1; i <= 7; i++){
        cin >> prize[i];
    }
    int cnt = 0;
    int num;
    for(int i = 1; i <= n; i++){
        cnt = 0;
        for(int j = 1; j <= 7; j++){
            cin >> num;
            for(int k = 1; k <= 7; k++){
                if(num == prize[k]){
                    cnt++;
                    break;
                }
            }
        }
        ans[7 - cnt]++;
    }
    for(int i = 0; i <= 6; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}