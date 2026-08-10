#include<iostream>
using namespace std;
int main(){
    double s;
    cin >> s;
    int step = 0;
    double pace = 2;
    double actual_distance = 0;
    while(s > actual_distance){
        step++;
        actual_distance += pace;
        pace *= 0.98;
    }
    cout << step << endl;
    return 0;
}