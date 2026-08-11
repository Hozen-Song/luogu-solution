#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int l, m;
    cin >> l >> m;
    int sign[10010];
    memset(sign, 1, sizeof(sign));

    int left, right;
    for(int i = 1; i <= m; i++){
        cin >> left >> right;
        for(int j = left; j <= right; j++){
            sign[j] = 0;
        }
    }
    int ans = 0;
    for(int i = 0; i <= l; i++){
        if(sign[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}