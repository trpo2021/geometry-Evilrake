#include  <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void error(int code, int column)
{
    for (int i = 0; i < column; i++)
    {
        cout << " ";
    }
    cout << "^" << endl;

    switch (code)
    {
    case 1: cout << "Error at column" << column << ": expected 'triangle'; code = " << code << endl;
        break;
    case 2: cout << "Error at column" << column << ": expected '<double>'; code = " << code << endl;
        break;
    case 3: cout << "Error at column" << column << ": expected ')'; code = " << code << endl;
        break;
    case 4: cout << "Error at column" << column << ": unexpected token; code = " << code << endl;
        break;
    case 5: cout << "Error at  column" << column << ": expected '('; code = " << code << endl;
        break;
    }

}
