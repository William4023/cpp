//
// Created by genius on 1/11/22.
//
#include <fstream>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){
    ifstream ifs("billboard.in");

    int first[4];
    for(int i = 0; i < 4; i++){
        ifs >> first[i];
    }

    int second[4];
    for(int i = 0; i < 4; i++){
        ifs >> second[i];
    }

    int truck[4];
    for(int i = 0; i < 4; i++){
        ifs >> truck[i];
    }

    int area1 = (first[2] - first[0] ) * (first[3] - first[1]) ;
    int area2 = (second [2] - second[0]) * (second[3] - second[1]);

    int left = max(first[0], truck[0]);
    int top = min(first[3], truck[3]);

    int right = min(first[2], truck[2]);
    int bottom = max(first[1], truck[1]);

    int intersec1 = max(0,right - left) * max(0, top - bottom);

    left = max(second[0], truck[0]);
    top = min(second[3], truck[3]);

    right = min(second[2], truck[2]);
    bottom = max(second[1], truck[1]);
    //cout << area1 <<" " << area2 << endl;

    int intersec2 = max(0, right - left) * max(0, top -bottom);

    ofstream ofs("billboard.out");
    //cout << intersec1 <<' ' <<  intersec2 << endl;

    ofs << area1 + area2 - intersec1 - intersec2;
    return 0;
}

//int intersec2 = (cx - dx) * (cy -dy);
