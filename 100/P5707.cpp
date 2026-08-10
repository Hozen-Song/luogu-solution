#include<iostream>
#include<cmath>
using namespace std;
int hour = 8, minute = 0;
void time_compute(int t) {
    while(t > 60) {
        t -= 60;
        hour--;
    }
    minute = 60 - t;
    hour--;
}

int main(){
    int s, v;
    cin >> s >> v;
    int time = 0;
    time = 10 + ceil((double)s / v);
    time_compute(time);
    while(hour < 0){
        hour += 24;
    }
    if(hour < 10){
        cout << "0" << hour << ":";
    } else {
        cout << hour << ":";
    }
    if(minute < 10){
        cout << "0" << minute;
    } else {
        cout << minute;
    }
    return 0;

}