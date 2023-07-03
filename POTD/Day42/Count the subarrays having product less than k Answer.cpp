class Solution {
public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int start = 0;
        int end = 0;
        long long product = 1;
        int count = 0;
        
        while (end < n) {
            product *= a[end];
            
            while (product >= k && start <= end) {
                product /= a[start];
                start++;
            }
            
            count += (end - start + 1);
            end++;
        }
        
        return count;
    }
};
