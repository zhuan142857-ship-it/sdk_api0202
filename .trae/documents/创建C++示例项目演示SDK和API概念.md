# C++示例项目演示SDK和API概念

## 项目结构
我将创建以下文件结构：

```
sdk_api0202/
├── include/
│   └── api.h        # API头文件，定义公共接口
├── src/
│   ├── sdk.cpp      # SDK实现文件，包含核心功能
│   └── main.cpp     # 主程序，使用API
└── CMakeLists.txt   # 构建配置文件
```

## 文件内容

### 1. api.h (API头文件)
- 定义公共接口
- 包含Hello World函数声明
- 包含add(int a, int b)函数声明

### 2. sdk.cpp (SDK实现文件)
- 实现API中声明的函数
- 包含具体的业务逻辑

### 3. main.cpp (主程序)
- 包含api.h头文件
- 调用API中的函数
- 演示如何使用SDK提供的功能

### 4. CMakeLists.txt
- 配置构建过程
- 设置包含目录
- 定义可执行文件

## 构建和运行
1. 使用CMake生成构建文件
2. 编译项目
3. 运行可执行文件查看结果

## 概念说明
- **API (Application Programming Interface)**: 定义了程序与外部组件交互的接口，在本示例中是api.h中声明的函数
- **SDK (Software Development Kit)**: 提供了开发所需的工具和库，在本示例中是sdk.cpp中的实现代码
- **关系**: API是SDK的一部分，SDK通过API暴露其功能，开发者通过API使用SDK提供的能力

通过这个简单的示例，您将能够理解SDK和API的基本概念以及它们之间的关系。