/**
 * @Description TODO
 * @Version 1.0.0
 * @Date 2024/3/23 17:32
 * @Author Kenton
 */

#include <algorithm>
#include <iostream>
#include <vector>


int main() {
    constexpr size_t buffer_count = 10000;
    std::vector<int> buffer(buffer_count);
    for (size_t i = 0; i < buffer_count; i++) {
        buffer[i] = i;
    }
    size_t max_value = buffer[0];
    for (size_t i = 0; i < buffer_count; i++) {
        max_value = (max_value > buffer[i]) ? max_value : buffer[i];
    }
    std::cout << max_value << '\n';
}
