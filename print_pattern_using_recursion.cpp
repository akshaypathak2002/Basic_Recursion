// In this we have to print pattern using recursion
// For example let us consider the example for value of N=16
// 16 11 6 1 -4 1 6 11 16
// I solve this by dividing it into two parts If you have better solution then please collebrate
#include <iostream>
#include <vector>
using namespace std;
class printPattern
{
private:
    int temp = 0;
    int N;

public:
    printPattern()
    {
        cout << "Enter the value of the pattern " << endl;
        cin >> N;
    }
    void printPatter1(vector<int> &ans, int &N, int temp)
    {
        // To print subtract of 5
        if (temp <= 0)
        {
            this->temp = temp;
            ans.push_back(temp);
            return;
        }
        ans.push_back(temp);
        printPatter1(ans, N, temp - 5);
    }
    void printPattern2(vector<int> &ans, int &N, int temp)
    { // To print addition of 5 pattern
        if (temp == N)
        {
            ans.push_back(temp);
            return;
        }
        ans.push_back(temp);
        printPattern2(ans, N, temp + 5);
    }
    vector<int> pattern()
    {
        vector<int> ans;
        printPatter1(ans, N, N);
        printPattern2(ans, N, temp + 5); // To start from the value increase by 5
        return ans;
    }
};
// Time complexity of this solution is O(N)
// Space complexity of this solution is O(N)
int main()
{
    printPattern *p1 = new printPattern(); // Dynamically creating class
    vector<int> ans = p1->pattern();
    for (auto ele : ans)
    {
        cout << ele << " ";
    }
    return 0;
}