#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T;
    cin >> T;
    switch(T){
        case 1:
            cout << "I love Luogu!" << endl;
            break;
        case 2:
            cout << 6 << " " << 4 << endl;
            break;
        case 3:
            cout << 3 << endl;
            cout << 12 << endl;
            cout << 2 << endl;
            break;
        case 4:
            cout << 166.667 << endl;
            break;
        case 5:
            cout << 480/32 << endl;
            break;
        case 6: {
            double c = sqrt(117);
            cout << c << endl;
            break;
        }
        case 7:
            cout << 110 << endl;
            cout << 90 << endl;
            cout << 0 << endl;
            break;
        case 8: {
            double r = 5;
            const double pi = 3.141593;
            cout << 2 * pi * r << endl;
            cout << pi * r * r << endl;
            cout << 4.0/3 * pi * r * r * r << endl;
            break;
        }
        case 9:
            cout << 22 << endl;
            break;
        case 10:
            cout << 9 << endl;
            break;
        case 11:
            cout << (double)100.0 / 3 << endl;
            break;
        case 12:
            cout << 'm' - 'a' + 1 << endl;
            cout << (char)('A' + 17) << endl;
            break;
        case 13:
            cout << 16 << endl;
            break;
        case 14:
            cout << 50 << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
    }
    return 0;
}