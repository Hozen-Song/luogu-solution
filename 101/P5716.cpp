#include<iostream>
using namespace std;
bool isLeapYear(int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int year, month;
    cin >> year >> month;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << 31 << endl;
    }else if(month == 4 || month == 6 || month == 9 || month == 11){
        cout << 30 << endl;
    }else{
        if(isLeapYear(year)){
            cout << 29 << endl;
        }else{
            cout << 28 << endl;
        }
    }
    return 0;
}