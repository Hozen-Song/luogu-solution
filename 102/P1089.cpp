#include<iostream>
using namespace std;
int main(){
    int money = 0;
    int save = 0;
    int budget;
    for(int i = 1; i <= 12; i++){
        cin >> budget;
        money += 300;
        if(budget > money){
            cout << "-" << i << endl;
            return 0;
        }else{
            money -= budget;
            save += (int)(money / 100) * 100;
            money %= 100;
        }
    }
    cout << money + save * 1.2 << endl;
    return 0;
}