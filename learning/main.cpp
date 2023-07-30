#include <iostream>
#include <string>

using namespace std;

/*
Compilation Code
g++ -std=c++11 -O2 -Wall test.cpp -o test

-std = c++11 Standard lib 11
-O2 optimization
-Wall warnings all
-o output binary
*/

int main() {
    int a, b;
    string x;

    cin >> a >> b;
    cout << a + b << endl;
}