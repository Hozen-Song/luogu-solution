#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    int data;
    bool flag = true;
    int line_dig = 0;
    cin >> n;
    while(sum < n * n){
        cin >> data;
        sum += data;
        flag = !flag;

        for(int i = 1; i <= data; i++){
            line_dig++;
            cout << flag;
            if(line_dig == n){
                line_dig = 0;
                cout << endl;
            }
        }
    }
    return 0;
}