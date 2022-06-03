
// fibbonacci series
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on.
#include <iostream>
using namespace std;

class fibbonacci
{
public:
    int first, second, next;

    fibbonacci()
    {
        this->first = 0;
        this->second = 1;
    }

    int fib(int n)
    {
        for (int i = 1; i < n; i++)
        {

            if (n <= 1)
            {
                next = i;
            }
            else
            {
                next = first + second;
                first = second;
                second = next;
            }
        }
        return next;
    }
};

int main()
{
    fibbonacci f1;
    cout << f1.fib(9) << endl;
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on.

    return 0;
}
