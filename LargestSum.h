#include <iostream>
#include <vector>
#include <string>
#include <cmath>

std::vector<int> largest_sum(std::vector<int> num_vec) {
    int n = num_vec.size();
    int max = 0;
    int temp = 0;
    std::vector<int> temp_vec;
    std::vector<int> largest_vec;
    int subArrayTotal = pow(2, n);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++){
                temp += num_vec[k];
                temp_vec.push_back(num_vec[k]);
            }
            if (temp > max) {
                max = temp;
                largest_vec = temp_vec;
            }
            temp = 0;
            temp_vec.clear();
        }
    }
    return largest_vec;
}