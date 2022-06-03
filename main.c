#include<stdio.h>

int main() {
    int n, b;
    scanf("%d%d", &n, &b);
    int a[n];
    for(int i = 0 ; i < n; scanf("%d", &a[i++]));
    int total = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int nextSum = b - a[j];
            for(int z = j+1; z < n; z++) {
                if (a[z] == nextSum) {
                    total++;
                }
            }
        }
    }
    printf("%d", total);
}