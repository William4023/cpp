//
// Created by wy on 8/12/21.
//
#include <iostream>
using namespace std;

int main_2() {
    int N;
    cin >> N;
    bool isPrime = true;
    if (N == 1) {
        cout << "NO\n";
    } else {
        for (int i = 2; i <= N - 1; i++) {
            if (N % i == 0) {
                isPrime = false;
            }
        }
        if (isPrime)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}