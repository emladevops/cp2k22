#include<stdio.h>

int main() {
    long long int a, b, c, d, count = 0;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    for(long long x = 0; x <= d; x++) {
        for(long long y = 0; y <= d; y++) {
            if (x <= y && a <= x*y) {
                if (x*y <=b && c <= 2*(x+y) && 2*(x+y) <= d) {
                    count = count + 1;
                }
            }
        }
    }
    printf("%lld", count);

    return 0;
}