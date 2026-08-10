#include<iostream>
using namespace std;
int main(){
    int x, n;
    cin >> x >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(!((x + i) % 7 == 6 || (x + i) % 7 == 0)){
            ans += 250;
        }
    }
    cout << ans << endl;
    return 0;
}