#include "assistant.h"
#include <iostream>
using namespace std;
void assistant()
{
    cout << "The program for sorting text works as follows:" << endl
         << "-d  --  sorting without repetition" << endl;
    cout << "-A -- case-sensitive text sorting. Uppercase letters are changed "
            "to "
            "lowercase."
         << endl;
    cout << "-r -- conclusion from the end. Write to file from the end."
         << endl;
    cout << "Parameters can be written in any order, example: -d -A -r, -r -A, "
            "-A -d;"
         << endl;
    cout << "|| If none of the parameters is specified, then normal sorting "
            "will "
            "occur ||"
         << endl;
    cout << "After you have specified the parameter, write what the program "
            "should work with"
         << endl;
    cout << "Example: -d -A string - work with string. -d -A file - work with "
            "file"
         << endl;
}
