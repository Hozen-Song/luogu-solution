#include<iostream>
using namespace std;
int main(){
    int num[110];
    int index = 1;
    while(true){
        cin >> num[index];
        if(num[index] == 0){
            break;
        }else{
            index++;
        }
    }
    for(int i = index - 1; i >= 1; i--){
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}