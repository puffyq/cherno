// refernce必须引用已经存在的变量，引用本身并不是新的变量
//  他们不占内存
#include <iostream>

#define LOG(x) std::cout << x<< std::endl;

void Increment(int& value)
{
    value++;
}

int main()   
{
    int a = 5;
    Increment(a);
    // int& ref = a;
    // ref = 2;

    LOG(a);
}