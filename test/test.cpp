#include <iostream>
#include "../include/api.h"  // 包含API头文件

int main() {
    // 使用静态库中的函数
    helloWorld();
    
    int a = 10;
    int b = 20;
    int result = add(a, b);
    std::cout << "Add result: " << a << " + " << b << " = " << result << std::endl;
    
    return 0;
}
