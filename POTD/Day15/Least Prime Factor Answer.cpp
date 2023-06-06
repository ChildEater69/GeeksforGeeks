#include <vector>

class Solution {
public:
    std::vector<int> leastPrimeFactor(int n) {
        std::vector<int> leastPrime(n + 1, 0);  // Initialize all least prime factors as 0
        std::vector<int> primes;  // Store prime numbers
        
        leastPrime[1] = 1;  // Set least prime factor of 1 as 1
        
        for (int i = 2; i <= n; i++) {
            if (leastPrime[i] == 0) {
                // i is prime, so its least prime factor is itself
                leastPrime[i] = i;
                primes.push_back(i);
            }
            
            // Mark the multiples of prime numbers as their least prime factors
            for (int j = 0; j < primes.size() && primes[j] <= leastPrime[i] && i * primes[j] <= n; j++) {
                leastPrime[i * primes[j]] = primes[j];
            }
        }
        
        return leastPrime;
    }
};
