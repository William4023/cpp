//
// Created by wy on 8/11/21.
//
#include <iostream>

using namespace std;

int main_loop_1() {
    int n;
    cin >> n;
    unsigned long long f = 0;
    for(int j=0;j < n; j++){
        f = f + (j+1)*(j+1)+2;
    }
    cout << f <<endl;

}



