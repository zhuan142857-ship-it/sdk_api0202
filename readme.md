这是一个学习sdk,api,lib,dll的项目。

test当中是静态库的学习项目（中间删除了一次，已经不能用了）
test2是动态库的学习。现在是可以用的。

实际上test和test2当中的代码是一样的。只是连接的时候不同。
test项目，需要include/api.h,build\Release\下的单独.lib文件
test2项目，需要include/api.h,build\Release\的3个文件。

作为使用者：test只需要一个.exe
test2需要.exe+.dll文件

关键在于cmake文件的配置。
