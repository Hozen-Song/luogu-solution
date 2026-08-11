#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int ans[10] = {0};
    int cache;
    for(int i = m; i <= n; i++){
        cache = i;
        while(cache > 0){
            ans[cache % 10]++;
            cache /= 10;
        }
    }
    for(int i = 0; i <= 9; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}