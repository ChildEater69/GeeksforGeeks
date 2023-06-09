#include <vector>

class Solution {
public:
    void Rearrange(int arr[], int n) {
        std::vector<int> aux;

        // Copy negative numbers to auxiliary array
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                aux.push_back(arr[i]);
            }
        }

        // Copy non-negative numbers to auxiliary array
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                aux.push_back(arr[i]);
            }
        }

        // Copy elements from auxiliary array back to the original array
        for (int i = 0; i < n; i++) {
            arr[i] = aux[i];
        }
    }
};
