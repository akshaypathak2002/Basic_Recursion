/*
Some people(n) are standing in a queue. A selection process follows a rule where people standing on even positions are selected.
 Of the selected people a queue is formed and again out of these only
people on even position are selected. This continues until we are left with one person.
 Find out the position of that person in the original queue. */
/*
Example:
n=5
output:4
Explanition:1,2,3,4,5 -> 2,4 ->4 */

#include <iostream>
using namespace std;
long long int nthPosition(long long int n, long long int i)
{
    if (n <= 1)
    {
        return 1 << i; // Using power of bits
    }
    return nthPosition(n / 2, i + 1);
    // Its time complexity O(logn)
    //As we are using recursion O(logn)
}
int main()
{
    long long int n;
    cin >> n;
    cout << nthPosition(n, 0) << endl;
    return 0;
}