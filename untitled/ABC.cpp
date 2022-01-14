//
// Created by genius on 1/9/22.
//3

#include<algorithm>
#include <vector>
#include<iostream>

using namespace std;

int main_Test() {
    int a;
    vector<int> number;
    for (int i = 0; i < 7; i++) {
        cin >> a;
        number.push_back(a);
    }
    sort(number.begin(), number.end());
    cout << number[0] << ' ' << number[1] << ' ' << number[6] - number[0] - number[1];
    return 0;
}


