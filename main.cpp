#include <iostream>

using namespace std;



int main()
{

    int a;
    long long b =2147483648;
    a=static_cast<int>(b);
    std::cout << endl<< a;
    return 0;
}
