/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/3/23 17:20
 * @Author Kenton
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5};

    for (int value : arr) {
        cout << value << ' ';
    }

    cout << endl;

    int arr2[] = {6,7,8,9,10};
    for (int value2 : arr2) {
        cout << value2 << ' ';
    }

    vector<string> arr3 = {"LiChengXin","wangzi","shuaige"};
    for (string value3 : arr3) {
        cout << value3 << ' ';
    }
}
