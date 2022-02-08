// To find the digital root of a number
// It is the sum of its digits using until we get the single digit that is between 0 to 9
#include <iostream>
using namespace std;
int digitalRoot(int n)
{
    if (n = 0)
        return 0;
    int sum = n % 10 + digitalRoot(n / 10); // To get the sum of digit
    if (sum >= 1 && sum <= 9)               // If sum is single digit then return it
        return sum;
    return sum % 10 + digitalRoot(sum / 10); // else making it a single digit number
}
int main()
{
    int number;
    cin >> number;
    cout << digitalRoot(number) << endl;
    return 0;
}