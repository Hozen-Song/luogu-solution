#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int cnt = 1;
    while(true){
        if(a == 1){
            break;
        }
        a /= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}