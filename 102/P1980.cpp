#include<iostream>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int cache = i;
        while(true){
            if(cache % 10 == x){
                cnt++;
            }
            if(cache < 10){
                break;
            }else{
                cache /= 10;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}