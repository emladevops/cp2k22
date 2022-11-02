#include<stdio.h>

int max(long long a, long long b, long long c, long long d) {
    long long max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}

int main() {
    long long a, b, c, d, count = 0;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    long long g = max(a, b, c, d);
    for(long long x = 0; x <= g; x++) {
        for(long long y = 0; y <= g; y++) {
            if(x <= y && a<=x*y && x*y<=b && c<=2*(x+y) && 2*(x+y)<=d) {
                count++;
            }
        }
    }
    printf("%lld", count);
    return 0;
}