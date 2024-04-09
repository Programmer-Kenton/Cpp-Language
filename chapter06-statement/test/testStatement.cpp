/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/3/23 17:09
 * @Author Kenton
 */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str = "L";

    switch (str) {
        case "L":
            cout << "output L";
            break;
        case "C":
            cout << "output C";
            break;
        case "X":
            cout << "output X";
            break;
        default:
            cout << "Error";
    }
}
