#include<iostream>
using namespace std;
int main(){
    int m, t, s;
    cin >> m >> t >> s;
    if(t == 0){
        cout << 0 << endl;
    }else{
        while(m > 0 && s >= t){
            m--;
            s -= t;
        }
        if(m > 0 && s != 0){
            m--;
        }
        cout << m << endl;
    }
    return 0;
}