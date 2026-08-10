//#define test
#include<iostream>
using namespace std;
int ans[410] = {0};
int middle_answer[410] = {0}; //用来存阶乘的中间结果
int length = 1;
void add(){ //每次执行都是把中间结果加到最终结果上
    for(int i = 1; i <= length; i++){
        ans[i] += middle_answer[i];
        if(ans[i] >= 10){
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
            if(i == length){
                length++;
            }
        }
    }
    return;

}
void dig_multiply(int n, int start_point){

}
void multiply(int n){
    if(n < 10){
        for(int i = 1; i <= length; i++){
        middle_answer[i] *= n;
        }
        for(int i = 1; i <= length; i++){
            if(middle_answer[i] >= 10){
                middle_answer[i + 1] += middle_answer[i] / 10;
                middle_answer[i] %= 10;
                if(i == length){
                    length++;
                }
            }
        }
    return;
    }else{
        int cache[410] = {0};//这里得先把要做乘法操作的大数存起来
        for(int i = 1; i <= length; i++){
            cache[i] = middle_answer[i];
        }
        for(int i = 1; i <= length; i++){
            middle_answer[i] *= n % 10;
        }
        for(int i = 1; i <= length; i++){
            if(middle_answer[i] >= 10){
                middle_answer[i + 1] += middle_answer[i] / 10;
                middle_answer[i] %= 10;
                if(i == length){
                    length++;
                }
            }
        }
        for(int i = 1; i <= length; i++){
            cache[i] *= n / 10;
        }
        #ifdef test
        cout << "cache = ";
        for(int i = length; i >= 1; i--){
            cout << cache[i];
        }
        cout << endl;
        #endif
        for(int i = 1; i <= length; i++){
            if(cache[i] >= 10){
                cache[i + 1] += cache[i] / 10;
                cache[i] %= 10;
                if(i == length){
                    length++;
                }
            }
        }
        length++;
        for(int i = 2; i <= length; i++){
            middle_answer[i] += cache[i - 1];
            if(middle_answer[i] >= 10){
                middle_answer[i + 1] += middle_answer[i] / 10;
                middle_answer[i] %= 10;
                if(i == length){
                    length++;
                }
            }
        }
    return;
    }
}
//这个代码写的有点蠢b 正常多精度乘法不是这么写这个multiply函数的，但是因为这道题最多只会涉及到大数*两位数所以就懒得想图省事随便写了(然而最后也没省事)
int main(){
    middle_answer[1] = 1;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        multiply(i);
        add();
        #ifdef test
        cout << "i = " << i << endl;
        cout << "length = " << length << endl;
        cout << "middle_answer = ";
        for(int j = length; j >= 1; j--){
            cout << middle_answer[j];
        }
        cout << endl;
        cout << "ans = ";
        for(int j = length; j >= 1; j--){
            cout << ans[j];
        }
        cout << endl;
        #endif
    }
    for(int i = length; i >= 1; i--){
        cout << ans[i];
    }
    cout << endl; //判题机会自动忽略末尾的空格和换行，习惯上最后都会换行一下
    return 0;
}