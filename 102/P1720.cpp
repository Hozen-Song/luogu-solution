#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double n;
    cin >> n;
    cout << fixed << setprecision(2) << (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5) << endl; //我完全没懂为什么这题会出现在这章
    return 0;
}