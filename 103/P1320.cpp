//#define debug
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans[40010];
    int index = 0;
    int N = s.length();

    char latest;
    latest = '0';
    int cnt = 0;
    for(int i = 0; i < N; i++){
        #ifdef debug
        cout << "i: " << i << " ";
        cout << "latest: " << latest << " ";
        cout << "cnt: " << cnt << " ";
        cout << endl;
        #endif
        if(s[i] != latest){
            #ifdef debug
            cout << endl;
            cout << "dif!" << endl;
            #endif
            ans[index] = cnt;
            index++;
            cnt = 0;
            latest = s[i];
        }
        cnt++;
    }
    for(int i = 2; i <= N; i++){
        cin >> s;
        for(int j = 0; j < N; j++){
            if(s[j] != latest){
                ans[index] = cnt;
                index++;
                cnt = 0;
                latest = s[j];
            }
            cnt++;
        }
    }
    ans[index] = cnt;

    cout << N << " ";
    for(int i = 0; i <= index; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}