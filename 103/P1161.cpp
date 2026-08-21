#include<iostream>
#include<cmath>
using namespace std;
double a;
int t;
bool light[2000050] = {false};
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a >> t;
        for(int j = 1; j <= t; j++){
            light[(int)(a * j)] = !light[(int)(a * j)];
        }
    }
    for(int i = 1; i <= 2000000; i++){
        if(light[i]){
            cout << i << endl;
        }
    }
    return 0;
}