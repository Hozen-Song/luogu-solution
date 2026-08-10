#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int side[4];
    for(int i = 1; i <= 3; i++){
        cin >> side[i];
    }
    sort(side + 1, side + 4);
    int a = side[1];
    int b = side[3];
    bool if_simplest = false;
    while(!if_simplest){
        for(int i = 2; i <= a; i++){
            if(a % i == 0 && b % i == 0){
                a /= i;
                b /= i;
                break;
            }
            if(i == a){
                if_simplest = true;
            }
        }
    }
    cout << a << "/" << b << endl;

    return 0;
}