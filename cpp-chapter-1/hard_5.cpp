//
// Created by wy on 8/12/21.
//
#include <iostream>
using namespace std;

int main_67(){
    int N; cin >> N;
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N-i; j++){
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

