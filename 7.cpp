#include <iostream>
#include <cmath>

int getAllWays(int remainingSum, int power, int base) {
    if (remainingSum == 0) {
        return 1;
    }

    if (remainingSum < 0 || base > remainingSum) {
        return 0;
    }

    int waysWithoutUsingBase = getAllWays(remainingSum, power, base + 1);
    int waysUsingBase = getAllWays(remainingSum - static_cast<int>(pow(base, power)), power, base + 1);

    return waysWithoutUsingBase + waysUsingBase;
}

int main() {
    int x, n;
    std::cin >> x >> n;

    int base = 1;

    int ways = getAllWays(x, n, base);
    std::cout << ways << std::endl;

    return 0;
}
