#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num[1010] = {0};
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    sort(num, num + n);
    double ans = 0;
    for(int i = 1; i < n - 1; i++){
        ans += num[i];
    }
    ans /= (n - 2);
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}