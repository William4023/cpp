//
// Created by wy on 8/11/21.
//
#include <iostream>
using namespace std;
int main_conditional_problem_1(){
    int x;
    cin >> x;
    if (x>50){
        cout << "YES" << endl;
    }
    else if(x%2 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

