#include<iostream>
#include<stdbool.h>

using namespace std;


int main() {
    int n;

    int currnum = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool correct = false;

    while (correct == false) {
        bool dup = false;
        int splitted[n];
        for (int i = 0; i < n; i++) {
            int splted = a[i] % currnum;
            splitted[i] = splted;
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (splitted[i] == splitted[j]) {
                    dup = true;
                    break;
                }
            }
        }
        if (dup == true) currnum++;
        else correct = true;


    }
    cout << currnum;
}