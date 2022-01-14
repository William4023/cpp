//
// Created by genius on 1/12/22.
//
#include <fstream>
#include <iostream>

using namespace std;

int main_blockedbillboard2() {
    ifstream ifs("billboard.in");
    ofstream ofs("billboard.out");
    int x1, y1, x2, y2, x3, y3, x4, y4;
    ifs >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int area = (x2 - x1) * (y2 - y1);
    if (x3 <= x1 && x2 <= x4 && y3 <= y1 && y2 <= y4) {
        ofs << 0;
    } else if ((y3 <= y1 && y2 <= y4) || (x3 <= x1 && x2 <= x4)) {
        int left = max(x3, x1);
        int right = min(x2, x4);
        int bottom = max(y1, y3);
        int top = min(y2, y4);
        int intersection = max(0, right - left) * max(0, top - bottom);
        ofs << area - intersection;
    } else {
        ofs << area;
    }
    return 0;
}

