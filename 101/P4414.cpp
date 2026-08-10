#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int num[3];
    for(int i = 0; i < 3; i++){
        cin >> num[i];
    }
    sort(num, num + 3);
    string s;
    cin >> s;
    for(int i = 0; i < 3; i++){
        cout << num[s[i] - 'A'] << " ";
    }
    cout << endl;
    return 0;
}