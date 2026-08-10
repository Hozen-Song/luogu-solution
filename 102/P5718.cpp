#include<iostream>
using namespace std;
int main(){
    int n;
    int num[110];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    int min = num[0];
    for(int i = 1; i < n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    cout << min << endl;
    return 0;
}