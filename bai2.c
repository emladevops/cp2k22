#include<stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int result[n];
    for(int i = 0; i<n; i++) {
        int toSort[m];
        for(int j=0; j < m; scanf("%d", &toSort[j++]));
          for (int z = 0; z < n; ++z) {
            if (toSort[0] < toSort[z]) {
            toSort[0] = toSort[z];
            }
        }
        result[i] = toSort[0];
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + result[i]; 
    }
    printf("%.2lf", ((float)sum)/5);
}