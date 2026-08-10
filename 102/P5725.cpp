#include<iostream>
using namespace std;
void output(int n){
    if(n < 10){
        cout << 0 << n;
    }else{
        cout << n;
    }
    return;
}
int main(){
    int n;
    cin >> n;
    int cnt = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            output(cnt);
            cnt++;
        }
        cout << endl;
    }
    cout << endl;
    cnt = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= n - i){
                cout << "  ";
            }else{
                output(cnt);
                cnt++;
            }
        }
        cout << endl;
    }
    return 0;
}