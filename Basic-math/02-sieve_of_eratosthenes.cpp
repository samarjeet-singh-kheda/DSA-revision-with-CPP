//  for finding out number of primes

//  learn segmented sieve

//!     Time Complexity --> O( n * log(log(n)) )

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int countPrimes(int n)
    {

        int count = 0;

        vector<int> prime(n + 1, true);

        for (int i = 2; i < n; i++)
        {

            if (prime[i])
            {

                // cout<<i<<endl;
                count++;

                for (int j = i * 2; j < n; j += i)
                {
                    prime[j] = false;
                }
            }
        }

        return count;
    }

    vector<int> primesList(int num)
    {
        vector<int> ans;

        vector<int> vec(num + 1, true);

        for (int i = 2; i <= num; i++)
        {
            if (i * 2 > num)
                break;

            if (vec[i])
            {
                for (int j = i * 2; j <= num; j += i)
                {
                    vec[j] = false;
                }
            }
        }

        for (int i = 2; i <= num; i++)
        {
            if (vec[i])
                ans.push_back(i);
        }

        return ans;
    }
};

int main()
{
    Solution s;

    cout << s.countPrimes(1000001) << endl;
    cout << s.primesList(1000001).size() << endl;

    // vector<int> primes = s.primesList(100);
    vector<int> primes = s.primesList(101);

    for (int i : primes)
    {
        cout << i << " ";
    }

    return 0;
}