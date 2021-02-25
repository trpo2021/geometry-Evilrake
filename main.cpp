#include <cmath>
#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void error(int code, int column)
{
    for (int i = 0; i < column; i++) {
        cout << " ";
    }
    cout << "^" << endl;

    switch (code) {
    case 1:
        cout << "Error at column" << column << ": expected '('; code = " << code
             << endl;
        break;
    case 2:
        cout << "Error at column" << column << ": expected ')'; code = " << code
             << endl;
        break;
    case 3:
        cout << "Error at column" << column
             << ": expected '<double>'; code = " << code << endl;
        break;
    case 4:
        cout << "Error at column" << column
             << ": expected 'triangle'; code =  " << code << endl;
        break;
    case 5:
        cout << "Error at  column" << column
             << ": unexpected token; code = " << code << endl;
        break;
    }
}

vector<float> setTriangle(string& str)
{
    string s = str;
    vector<float> coord;
    int begin = s.find("((");
    int end = s.find("))");
    int k = 0, column = 10;

    if (end == -1) {
        error(3, s.length() - 1);
        return coord;
    }
}
