//
// Created by wy on 8/11/21.
//
#include <iostream>
using namespace std;
int main_basic_problem_3(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int buys = b/a;
    int frees = buys/3 ;
    cout << buys + frees << endl;
}