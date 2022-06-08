// pointer只是个整数，存储所指向的地址
// 为了实现对内存的控制
#include <iostream>

int main()
{
    int var = 8;
    int *ptr = &var; //内存地址是0，也是NULL，或者nullptr
    var = 10;
    std::cout << *ptr << std::endl;

    char *buffer = new char[8];
    memset(buffer, 0, 8 );

    char **ptr = &buffer;

    delete[] buffer;

}