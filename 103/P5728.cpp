#include<iostream>
#include<cmath>
using namespace std;
int ans = 0;
int gradeA[1010];
int gradeB[1010];
int gradeC[1010];
int gradeSUM[1010];
void judge(int i, int j){
    if(abs(gradeA[i] - gradeA[j]) <= 5 && abs(gradeB[i] - gradeB[j]) <= 5 && abs(gradeC[i] - gradeC[j]) <= 5 && abs(gradeSUM[i] - gradeSUM[j]) <= 10){
        ans++;
    }
    return;
}
int main(){

    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> gradeA[i] >> gradeB[i] >> gradeC[i];
        gradeSUM[i] = gradeA[i] + gradeB[i] + gradeC[i];
    }
    for(int i = 1; i <= N - 1; i++){
        for(int j = i + 1; j <= N; j++){
            judge(i, j);
        }
    }
    cout << ans << endl;
    return 0;
}