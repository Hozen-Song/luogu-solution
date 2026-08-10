//#define test
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = INT_MAX - 1, b = INT_MAX;//-1是为了防止13行溢出
    int ans = 1;
    int cache = 1;
    for(int i = 0; i < n; i++){
        a = b;
        cin >> b;
        if(a + 1 == b){
            cache++;
        }else{
            if(cache > ans){
                ans = cache;
            }
            cache = 1;
        }
        #ifdef test
        cout << cache << endl;
        #endif
    }
    if(cache > ans){
        ans = cache;
    }//最后一次循环可能是最长的连续数列
    cout << ans << endl;
    return 0;
}