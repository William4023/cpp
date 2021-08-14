//
// Created by wy on 8/11/21.
//
#include <iostream>
using namespace std;
int main_conditional_problem_4(){
    int y;
    cin >> y;
    if(y%400 == 0){
        cout << "YES" <<endl;
    }
    else if(y%4 == 0 && y%100 != 0){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
    return 0;
}

