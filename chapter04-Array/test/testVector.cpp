/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/3/23 14:32
 * @Author Kenton
 */

#include <iostream>
#include <vector>

int main() {
    // int a[3];
    // std::vector<int> x;
    // std::vector<float> y;
    // // y = x;
    //
    // std::vector<int> x1(3, 1);
    // std::cout << x1.size() << std::endl;
    // std::cout << x1.empty() << std::endl;
    // std::cout << x1.size() << std::endl;
    //
    // x1.push_back(2);
    // std::cout << x1.size() << std::endl;
    // std::cout << x1.empty() << std::endl;
    //
    // x1.pop_back();
    // std::cout << x1.size() << std::endl;
    // // std::cout << x1[20] << std::endl;
    // // std::cout << x1.at(20) << std::endl;
    //
    //
    // auto b = x1.begin();
    // auto e = x1.end();
    // while (b != x1.end()) {
    //     std::cout << *b << std::endl;
    //     b++;
    // }
    //
    // std::cout << "-------------------------------------------" << std::endl;
    //
    // x1 = {4,5,6};
    // for (auto val : x1) {
    //     std::cout << val << std::endl;
    // }

    // int a[3][4];
    // std::vector<std::vector<int>> x = {{1,2,3},{4,5,6}};
    // std::cout << x[1][2] << std::endl;

    std::vector<int> x;
    std::cout << x.size() << std::endl;

    std::vector<int>* ptr = &x;
    std::cout << (*ptr).size() << std::endl;
    std::cout << ptr->size() << std::endl;
}
