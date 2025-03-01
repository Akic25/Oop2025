#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int tr = 2; tr < n / 2; tr++)  // Fill in: 2
        if ((n % tr) == 0)              // Fill in: tr
            return false;               // Fill in: false
    return true;
}

int main()
{
    int n;
    std::cout << "Enter a number:";
    std::cin >> n;                      // Fill in: n
    if (isPrime(n))
        std::cout << n << " is prime !";
    else
        std::cout << n << " is NOT prime !";
    return 0;
}