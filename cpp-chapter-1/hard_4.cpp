//
// Created by wy on 8/12/21.
//
#include <iostream>
using namespace std;

int main_4(){
    int N; cin >> N;
    int cnt = 1;
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= i; j++){
            cout << cnt << " ";
            cnt = cnt+1;
        }
        cout << "\n";
    }
}
