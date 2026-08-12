#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num[110];
    for(int i = 1; i <= n; i++){
        cin >> num[i];
    }
    int sum[5060];
    int cnt = 1;
    for(int i = 1; i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            sum[cnt] = num[i] + num[j];
            cnt++;
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= cnt - 1; j++){
            if(num[i] == sum[j]){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}