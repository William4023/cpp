// Created by wy on 8/12/21.
//Given an integer N, calculate (1)+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+...+N)
#include <iostream>
using namespace std;

int main_1(){
    int N; cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++){
        int cur = 0;
        for (int j = 1; j <= i; j++){
            cur += j;
        }
        ans += cur;
    }
    cout << ans << "\n";
}
