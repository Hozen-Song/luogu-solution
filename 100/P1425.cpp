#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int hour = 0, minute = 0;
    int minute1 = a * 60 + b;
    int minute2 = c * 60 + d;
    int diff = minute2 - minute1;
    hour = diff / 60;
    minute = diff % 60;
    cout << hour << " " << minute << endl;
    return 0;

}