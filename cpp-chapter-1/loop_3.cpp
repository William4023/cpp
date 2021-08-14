//
// Created by wy on 8/12/21.
//
#include <iostream>
using namespace std;
int main_loop_3(){
    int n;
    int k;
    cin >> n >> k;
    int i = n;
    while (i>=n){
        i++;
        if(i%k == 0){
            cout << i <<endl;
            return 0;
        }
    }

}

