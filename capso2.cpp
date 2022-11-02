#include<iostream>

using namespace std;
typedef long ll;

int main() {
    ios_base::sync_with_stdio(false);
    ll a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;
    for(int x = 0; x <= d; x++) {
        for(int y = 0; y <= d; y++) {
            if (x <= y && a <= x*y && x*y <=b && c <= 2*(x+y) && 2*(x+y) <= d) {
                count++;
            }
        }
    }
    cin.tie(0);
    cout.tie(0);
    cout << count;

    return 0;
}