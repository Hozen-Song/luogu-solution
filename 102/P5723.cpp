#include<iostream>
using namespace std;
bool isprime(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    int sum = 0;
    int cnt = 0;
    int i = 2;
    while(true){
        if(isprime(i) && sum < n){
            sum += i;
            cnt++;
            cout << i << endl;
        }else if(sum + i >= n){
            break;
        }
        i++;
    }
    cout << cnt << endl;
    return 0;
}