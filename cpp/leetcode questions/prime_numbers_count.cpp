// given a number N 
// count the number of prime numbers from 0 to N-1

// 1. Naive Approach
    // if the number is divisible by any number from 2 to N-1 then its not prime otherwise it is prime.
    // but this approach will pass only 17/66 test cases and will exceed the time limit because time complexity is 0(n^2)


// #include <iostream>
// #include <vector>

// class Solution {
// public:
//     bool isPrime(int n) {
//         if (n < 2)
//             return false;
//         for (int i = 2; i<n; i++) {  
//             if (n % i == 0)
//                 return false;
//         }
//         return true;
//     }

//     int countPrimes(int n) {
//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             if (isPrime(i)) {
//                 count++;
//             }
//         }
//         return count;
//     }
// };

// int main() {
//     Solution solution;
//     int n;
//     std::cout << "Enter a number (N): ";
//     std::cin >> n;
//     int primeCount = solution.countPrimes(n);
//     std::cout << "Number of prime numbers from 0 to " << n - 1 << " is: " << primeCount << std::endl;
//     return 0;
// }


// 2.sqrt approach
//     run the inner loop of the isPrime function till root(n) only instead of n because if a and b are two factors of n -
//     if a > root(n)
//     if b > root(n)
//     then a * b > n but thats not possible therefore it means that atleast one of the factors is less than root(n)

// #include <iostream>
// #include <vector>

// class Solution {
// public:
//     bool isPrime(int n) {
//         if (n < 2)
//             return false;
//         for (int i = 2; i<n; i++) {  
//             if (n % i == 0)
//                 return false;
//         }
//         return true;
//     }

//     int countPrimes(int n) {
//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             if (isPrime(i)) {
//                 count++;
//             }
//         }
//         return count;
//     }
// };

// int main() {
//     Solution solution;
//     int n;
//     std::cout << "Enter a number (N): ";
//     std::cin >> n;
//     int primeCount = solution.countPrimes(n);
//     std::cout << "Number of prime numbers from 0 to " << n - 1 << " is: " << primeCount << std::endl;
//     return 0;
// }

// 3.Sieve of erasthosthenes - The array is called the SIEVE 
//     if a number lying between 2 to n-1 is prime then all its multiples will be non-prime.
//     eg-2 is prime then all its multiples 4, 6, 8 etc... will be non-prime

// #include <vector>
// #include <iostream>

// class Solution {
// public:
//     int countPrimes(int n) {
//         if (n <= 2)
//             return 0;

//         std::vector<bool> prime(n, true);
//         prime[0] = prime[1] = false;
//         int count = 0;

//         for (int i = 2;  i < n; i++) {
//             if (prime[i]) {
//                 for (int j = i*2; j < n; j = j+i) {
//                     prime[j] = false;
//                 }
//             }
//         }

//         for (int i = 2; i < n; i++) {
//             if (prime[i]) {
//                 std::cout << i << " "; // Print prime numbers
//                 count++;
//             }
//         }

//         return count;
//     }
// };

// int main() {
//     Solution solution;
//     int n;
//     std::cout << "Enter a number (N): ";
//     std::cin >> n;
//     int primeCount = solution.countPrimes(n);
//     std::cout << "\nNumber of prime numbers from 2 to " << n - 1 << " is: " << primeCount << std::endl;
//     return 0;
// }

// 4.Sieve of erasthosthenes optimized - The array is called the SIEVE 
// We start the inner loop from i*i instead of i*2 since all the numbers till i*i will be already marked in the previous iterations.
// Since in inner loop the first number that is checked is i*i therefore there is no need to go beyond root(n) in outer loop because for eg- N =25
// then when i = 5 i.e, root(25) in outer loop the first number to be checked will be i*i = 25 beyond that for numbers like 6,7...i*i will be      greater than N so no point in checking those and to write that we write i*i <= n by squaring both sides.

#include <vector>
#include <iostream>

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        std::vector<bool> prime(n, true);
        prime[0] = prime[1] = false;
        int count = 0;

        for (int i = 2;  i*i < n; i++) {
            if (prime[i]) {
                for (int j = i*i; j < n; j = j+i) {
                    prime[j] = false;
                }
            }
        }

        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                std::cout << i << " "; // Print prime numbers
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution solution;
    int n;
    std::cout << "Enter a number (N): ";
    std::cin >> n;
    int primeCount = solution.countPrimes(n);
    std::cout << "\nNumber of prime numbers from 2 to " << n - 1 << " is: " << primeCount << std::endl;
    return 0;
}
