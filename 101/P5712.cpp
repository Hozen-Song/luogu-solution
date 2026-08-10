#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << "Today, I ate " << n;
    if(n >= 2){
        cout << " apples." << endl;
    }else{
        cout << " apple." << endl;
    }
    return 0;
}