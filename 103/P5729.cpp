#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int w, x, h;
    cin >> w >> x >> h;
    int q;
    cin >> q;
    int sign[25][25][25];
    memset(sign, 1, sizeof(sign));
    int x1, y1, z1, x2, y2, z2;
    for(int i = 1; i <= q; i++){
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for(int j = x1; j <= x2; j++){
            for(int k = y1; k <= y2; k++){
                for(int o = z1; o <= z2; o++){
                    sign[j][k][o] = 0;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= w; i++){
        for(int j = 1; j <= x; j++){
            for(int k = 1; k <= h; k++){
                if(sign[i][j][k]){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}