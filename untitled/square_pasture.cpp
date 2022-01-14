#include <iostream>
#include <fstream>

using namespace std;

// http://www.usaco.org/index.php?page=viewproblem2&cpid=663

int main_square_pasture() {
    const string progName = "square";
    ifstream ifs(progName + ".in");
    int x1, y1, x2, y2, x3, y3, x4, y4;
    ifs >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int left = min(x1, x3), right = max(x2, x4);
    int bottom = min(y1, y3), top = max(y2, y4);
    int edge = max(right - left, top - bottom);
    ofstream ofs(progName + ".out");
    ofs << edge * edge;

    return 0;
}
