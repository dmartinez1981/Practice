#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0) return false;
    int p = x;
    int lengthCount = 0;
    for(; p != 0; p /= 10, lengthCount++);     

    int arr[lengthCount];
    int i;
    for (i = 0; i<lengthCount;i++)
    {
        arr[i] = x%10;
        x /=10;
    }
// even case

    for (i=0; i < lengthCount/2; i++)
    {
        if (arr[i]==arr[lengthCount - 1 -i])
            continue;
        else
            return false;
    }
    return true;
    }
};


int main()
{
    Solution result;
    int input =  12321;
    bool result2 = result.isPalindrome(input);
    cout << result2 << endl;
    int xx=10;

}