#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int plan[3][2];
    for(int i = 0; i < 3; i++){
        cin >> plan[i][0] >> plan[i][1];
    }
    int answer = INT_MAX;
    int cnt;
    for(int i = 0; i < 3; i++){
        cnt = ceil(n * 1.0 / plan[i][0]);
        if(cnt * plan[i][1] < answer){
            answer = cnt * plan[i][1];
        }
    }
    cout << answer << endl;
    return 0;
}