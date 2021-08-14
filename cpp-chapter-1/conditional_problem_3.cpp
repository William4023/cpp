//
// Created by wy on 8/11/21.
//
#include <iostream>
using namespace std;
int main_conditional_problem_3(){
    int g;
    cin >> g;
    if(-1<g && g<60){
        cout << "F" << endl;
    }
    else if(59<g && g<70){
        cout << "D" << endl;
    }
    else if(69<g && g<80){
        cout << "C" <<endl;
    }
    else if(79<g && g<90){
        cout << "B" <<endl;
    }
    else if(89<g && g<101){
        cout << "A" <<endl;
    }
    else{
        return 0;
    }
}

