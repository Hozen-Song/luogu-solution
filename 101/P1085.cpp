#include<iostream>
using namespace std;
int main(){
    int a, b;
    int largest = 8;
    int answer = 0;
    for(int i = 1; i <= 7; i++){
        cin >> a >> b;
        if(a + b > largest){
            largest = a + b;
            answer = i;
        }
    }
    cout << answer << endl;
    return 0;
}