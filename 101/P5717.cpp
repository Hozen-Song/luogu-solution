//#define test
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int len[4];
    for(int i = 1; i <= 3; i++){
        cin >> len[i];
    }
    sort(len + 1, len + 4);
    #ifdef test
    for(int i = 1; i <= 3; i++){
        cout << len[i] << " ";
    }
    cout << endl;
    cout << endl;
    #endif
    if(len[1] + len[2] <= len[3]){
        cout << "Not triangle" << endl;
    }else{
        if(pow(len[1], 2) + pow(len[2], 2) == pow(len[3], 2)){
            cout << "Right triangle" << endl;
        }else if(pow(len[1], 2) + pow(len[2], 2) > pow(len[3], 2)){
            cout << "Acute triangle" << endl;
        }else{
            cout << "Obtuse triangle" << endl;
        }
        if(len[1] == len[2] || len[2] == len[3]){
            cout << "Isosceles triangle" << endl;
            if(len[1] == len[2] && len[2] == len[3]){
                cout << "Equilateral triangle" << endl;
            }
        }
    }
    return 0;
}