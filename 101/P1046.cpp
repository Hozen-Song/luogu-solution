#include<iostream>
using namespace std;
int main(){
    int apple[11] = {0};
    int height;
    for(int i = 1; i <= 10; i++){
        cin >> apple[i];
    }
    cin >> height;
    height += 30;
    int ans = 0;
    for(int i = 1; i <= 10; i++){
        if(height >= apple[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}