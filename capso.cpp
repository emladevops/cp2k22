#include<iostream>
#include<math.h>

const int limit = 1e9+7;
typedef long long ll;

using namespace std;

int main() {
    ll a, b, k, count = 0;
    cin >> a >> b >> k;
    for (int i = 0; i < b; i++) {
        bool flag = false;
        if (a <= i*i && i*i <= b) {
            flag = true;
        }
        for (int j = 0; j < b; j++) {
            if (a <= j*j*j && j*j*j <= b && flag == true && abs(i*i - j*j*j) <= k) {
                count++;
            }
        }  
    }
    cout << count;
    cin.tie(0);
    cout.tie(0);
    return 0;
}