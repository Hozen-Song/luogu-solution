#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int money = a * 10 + b;
    cout << floor(money / 19) << endl;
    return 0;
}