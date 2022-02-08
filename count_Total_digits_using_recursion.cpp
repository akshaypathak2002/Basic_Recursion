// In this we have to count total number of digits using recursion

#include <iostream>
using namespace std;
int countDigits(int n)
{
    if (n >= 0 && n <= 9) // If number is between 0 to 9(single digit ) then return 1
        return 1;
    return 1 + countDigits(n / 10); // we return 1 if not in between 0 and 9 and divide by 10 to remove trailing number
 //Its time complexity is O(logn)
 //Its space complexity is O(logn)
}
int main()
{
    int number;
    cin >> number;
    cout << countDigits(number) << endl;
    return 0;
}