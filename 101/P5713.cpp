#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int time1 = 0, time2 = 0;
    time1 = n * 5;
    time2 = n * 3 + 11;
    if(time1 < time2){
        cout << "Local" << endl;
    }else{
        cout << "Luogu" << endl;
    }
    return 0;
}