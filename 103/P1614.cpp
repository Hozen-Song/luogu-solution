#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int num[3010];
    for(int i = 1; i <= n; i++){
        cin >> num[i];
    }
    int smallest = 0;
    int sum = 0;
    for(int i = 1; i <= m; i++){
        smallest += num[i];
    }
    sum = smallest;
    for(int i = m + 1; i <= n; i++){
        sum += num[i] - num[i - m];
        if(sum < smallest){
            smallest = sum;
        }
    }
    cout << smallest << endl;
    return 0;
}