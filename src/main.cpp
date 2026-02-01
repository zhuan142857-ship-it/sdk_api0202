#include <iostream>
#include "../include/api.h"

int main() {
    // 使用API调用SDK提供的功能
    helloWorld();
    
    int a = 5;
    int b = 3;
    int result = add(a, b);
    std::cout << "Add result: " << a << " + " << b << " = " << result << std::endl;
    
    return 0;
}
