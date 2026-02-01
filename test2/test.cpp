#include <iostream>
#include "../include/api.h"  // 包含API头文件

int main() {
    // 使用动态链接库中的函数
    helloWorld();
    
    int a = 15;
    int b = 25;
    int result = add(a, b);
    std::cout << "Add result: " << a << " + " << b << " = " << result << std::endl;
    
    return 0;
}
