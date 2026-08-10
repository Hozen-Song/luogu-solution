#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max = INT_MIN;
    int min = INT_MAX;
    int n;
    cin >> n;
    int num;
    for(int i = 1; i <= n; i++){
        cin >> num;
        if(num > max){
            max = num;
        }
        if(num < min){
            min = num;
        }
    }
    cout << max - min << endl;
    return 0;
}