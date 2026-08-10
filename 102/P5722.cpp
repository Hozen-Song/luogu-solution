#include<iostream>
using namespace std;
int main(){
    int answer = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        answer += i;
    }
    cout << answer << endl;
    return 0;
}