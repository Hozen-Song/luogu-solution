#include<iostream>
using namespace std;
int main(){
    int time[16000] = {0};
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                time[i + j + k]++;
            }
        }
    }
    int biggest = 0;
    int id = 0;
    for(int i = 1; i <= a + b + c; i++){
        if(time[i] > biggest){
            id = i;
            biggest = time[i];
        }
    }
    cout << id << endl;
    return 0;
}