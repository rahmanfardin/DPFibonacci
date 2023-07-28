#include <iostream>
#include <vector>
using namespace std;

class Fibonacci
{
private:
    int num;
    vector<int> dp;

public:
    Fibonacci(int num, vector<int> arr)
    {
        this->num = num;
        this->dp = arr;
    }

    int getNum()
    {
        return this->num;
    }

    vector<int> getDP()
    {
        return this->dp;
    }

    int fib(int num)
    {
        if (dp[num] != -1)
        {
            cout << "s "<< num <<"= " << dp[num] <<endl;
            return dp[num];
        }
        int result = fib(num - 1) + fib(num - 2);
        dp.at(num) = result;
        return result;
    }
};

int main()
{
    vector<int> dp(100, -1);
    dp.at(0) = 0;
    dp.at(1) = 1;
    Fibonacci *fibo = new Fibonacci(40, dp);
    int resut = fibo->fib(fibo->getNum());
    cout << resut << endl;
}