#include<iostream>
using namespace std;
int main(){
    int num[300] = {0};
    int n;
    cin >> n;
    int index = 1;
    num[0] = n;
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }else{
            n = n * 3 + 1;
        }
        num[index] = n;
        index++;
    }
    for(int i = index - 1; i >= 0; i--){
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}