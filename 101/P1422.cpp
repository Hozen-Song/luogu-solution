#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    double cost = 0;
    if(n > 400){
        cost += 0.5663 * (n - 400);
        n = 400;
    }
    if(n > 150){
        cost += 0.4663 * (n - 150);
        n = 150;
    }
    cost += 0.4463 * n;
    cout << fixed << setprecision(1) << cost << endl;
    return 0;
}