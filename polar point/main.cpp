#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    string as,bs;
    double a,b;
    ofstream fout("/Users/romburunduk/Documents/polar point/polar point/angle1.out.txt");
    ifstream fin("/Users/romburunduk/Documents/polar point/polar point/angle1.in.txt");
    fin>>as>>bs;
    a=atof(as.c_str());
    b=atof(bs.c_str());
    if (a!=0) {
        fout<<abs(atan(b/a));
    } else{
        fout<<M_PI/2;
    }
    fin.close();
    fout.close();
}
