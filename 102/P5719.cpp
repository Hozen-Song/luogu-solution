#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n, k;
    int sumA = 0, sumB = 0;
    int cntA = 0, cntB = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        if(i % k == 0){
            sumA += i;
            cntA++;
        }else{
            sumB += i;
            cntB++;
        }
    }
    double avgA = (double)sumA / cntA;
    double avgB = (double)sumB / cntB;
    cout << fixed << setprecision(1) << avgA << " " << fixed << setprecision(1) << avgB << endl;
    return 0;
}
//这题还有一些优化，比如通过在k的基础上不断加k来计算A的和，而B的和可以通过总和减去A的和来得到，可以减少循环次数，但懒得写了（（
//因为n的范围比较小所以这样的优化意义不大，但是如果n的范围很大，现在的写法就有可能会导致TLE
