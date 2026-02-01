#ifndef API_H
#define API_H

// 导出声明
#ifdef SDK_API_LIB_EXPORTS
#define SDK_API_LIB_API __declspec(dllexport)
#else
#define SDK_API_LIB_API __declspec(dllimport)
#endif

// API接口声明
SDK_API_LIB_API void helloWorld();
SDK_API_LIB_API int add(int a, int b);

#endif // API_H
