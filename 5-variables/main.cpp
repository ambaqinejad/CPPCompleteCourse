#include <iostream>
#include <iomanip>

int main() {
    bool a = true;
    std::cout << a << std::endl;
    if (0) {
        std::cout << "true" << std::endl;
    }

    int a1 = 0b11;
    int a2 = 011;
    int a3 = 0x11;
    std::cout << a1 << std::endl;
    std::cout << a2 << std::endl;
    std::cout << a3 << std::endl;

    // int test1 {2.9}; // error
    int test2(2.9);

    double test3{2};
    std::cout << test3 << std::endl;
    int test4 = 2.9;
    std::cout << test4 << std::endl;


    // std::cout << test1 << std::endl;
    std::cout << test2 << std::endl;

    std::cout << sizeof(test2) << std::endl;
    std::cout << sizeof(test3) << std::endl;
    std::cout << sizeof(float) << std::endl;


    signed int y1{-30};
    // unsigned int y2 {-40}; //error

    std::cout << std::setprecision(20);

    float f1{12.0123456789012345678f};
    double d1{12.0123456789012345678};
    long double d2{12.0123456789012345678L};
    std::cout << f1 << std::endl;
    std::cout << d1 << std::endl;
    std::cout << d2 << std::endl;

    std::cout << 0.0 / 0.0 << std::endl;
    std::cout << 12.123 / 0 << std::endl;

    std::cout << std::setprecision(10);
    double d3 {3.15e-1};
    std::cout << d3 << std::endl;

    bool t {true};
    bool f {false};
    std::cout << t << std::endl;
    std::cout << f << std::endl;
    std::cout << std::boolalpha;
    std::cout << t << std::endl;
    std::cout << f << std::endl;

    char c1 {65};
    std::cout << c1 << std::endl;
    c1++;
    std::cout << c1 << std::endl;
    std::cout << (int)c1 << std::endl;
    std::cout << static_cast<int>(c1) << std::endl;


    auto au1 {12};
    auto au2 {14.0}; // double
    auto au3 {13.0f}; // float
    auto au4 {15.0l}; // long double
    auto au5 {'e'}; // char
    auto au6 {123u}; // unsigned
    auto au7 {123ul}; // unsigned long
    auto au8 {-123ll}; // long long
    auto au9 {123ull}; // unsigned long long
    std::cout << "--------------" << std::endl;
    std::cout << sizeof(au1) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(au2) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(au3) << std::endl;
    std::cout << sizeof(float) << std::endl;
    std::cout << sizeof(au4) << std::endl;
    std::cout << sizeof(long double) << std::endl;
    std::cout << sizeof(au5) << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(au6) << std::endl;
    std::cout << sizeof(unsigned int) << std::endl;
    std::cout << sizeof(au7) << std::endl;
    std::cout << sizeof(unsigned long) << std::endl;
    std::cout << sizeof(au8) << std::endl;
    std::cout << sizeof(long long) << std::endl;
    std::cout << sizeof(au9) << std::endl;
    std::cout << sizeof(unsigned long long) << std::endl;
    return 0;
}
