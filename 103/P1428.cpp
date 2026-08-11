#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num[110] = {0};
    for(int i = 1; i <= n; i++){
        cin >> num[i];
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        cnt = 0;
        for(int j = 1; j < i; j++){
            if(num[j] < num[i]){
                cnt++;
            }
        }
        cout << cnt << " ";
    }
    cout << endl;
    return 0;
}