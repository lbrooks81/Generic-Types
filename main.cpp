#include <iostream>
#include "MyPair.h"

template<typename T1, typename T2>
class Pair
{
private:
    T1 first;
    T2 second;
public:
    //* instance variables should be set in the format below
    Pair(T1 first, T2 second) : first(first), second(second) {}

    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }
};


//* This states that T must be a numeric type
template<typename T>
    concept Numeric = std::is_arithmetic_v<T>;

//* This can only accept ONE type of numeric number
//* For instance, passing a double and an int together wouldn't work for this function
template <Numeric T>
T myMax(T a, T b)
{
    return a > b ? a : b;
}

template <Numeric T1, Numeric T2>
double myMax(T1 a, T2 b)
{
    return a > b ? a : b;
}

int main()
{
    int num1 = 10, num2 = 20;
    double double1 = 3.14, double2 = 2.71;
    std::string test1 = "test", test2 = "test2";

    std::cout << "Max of " << num1 << " and " << num2 << " is: "
    << myMax(num1, num2) << std::endl;

    std::cout << "Max of " << double1 << " and " << double2 << " is: "
    << myMax(double1, double2) << std::endl;


    //* The following code wouldn't work, as the Numeric concept we defined is violated by the strings
    // std::cout << "Max of " << test1 << " and " << test2 << " is: "
    // << myMax(test1, test2) << std::endl;

    std::cout << "Max of " << num1 << " and " << double2 << " is: "
    << myMax(num1, double2) << std::endl;

    Pair<int, std::string> myPair(42, "Hello, World");
    std::cout << myPair.getFirst() << std::endl;
    std::cout << myPair.getSecond() << std::endl;


    //* ====== CUSTOM PAIR ========
    PairNS::MyPair<int, bool> myPair2(32, true);
    std::cout << myPair2.getFirst() << std::endl;
    std::cout << myPair2.getSecond() << std::endl;
    //* The linker needs to connect our class MyPair to the main

    return 0;
}


