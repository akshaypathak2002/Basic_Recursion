// We have to find the power of number that is n^p using recursion
// Where n is the number and p is the power to which n to be raised
#include <iostream>
using namespace std;
int RecursivePower(int n, int p)
{
    if (p == 0) // Any number which have power raised to 0 is  1
        return 1;
    return n * RecursivePower(n, p - 1);
    // Its time complexity is O(p)
    // Its space complexity is O(p)
}
int main()
{
    int number, power;
    cin >> number >> power;
    cout << RecursivePower(number, power) << endl;

    return 0;
}