#include "../exercise.h"
#include <numeric>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

int main(int argc, char **argv) {
    using DataType = float;
    int shape[]{1, 3, 224, 224};
    // TODO: 调用 `std::accumulate` 计算张量占用字节数
    size_t elem_num = std::accumulate(std::begin(shape), std::end(shape), size_t(1), std::multiplies<>());
    int size = static_cast<int>(elem_num * sizeof(DataType));

    ASSERT(size == 602112, "4x1x3x224x224 = 602112");
    return 0;
}
