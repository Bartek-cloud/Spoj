#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int number_of_elements;
vector<int> values, sizes,part;
vector<vector<int>> memo;
int solve(int size_left, int element_index)
{
 
    if (element_index < 0) {
        return 0;
    }
    if (memo[size_left][element_index] > -1) {
        return memo[size_left][element_index];
    }
    memo[size_left][element_index] = solve(size_left, element_index - 1);
    if (sizes[element_index] <= size_left) {
        memo[size_left][element_index] = max(memo[size_left][element_index], solve(size_left - sizes[element_index], element_index - 1) + values[element_index]);
    }
    return memo[size_left][element_index];
}
 
int main()
{
    int knapsack_size;
    cin >> knapsack_size >> number_of_elements;
    part.assign(number_of_elements+1,-1);
    memo.assign(knapsack_size + 1, part);
    values.resize(number_of_elements);
    sizes.resize(number_of_elements);
    for (int i = 0; i < number_of_elements; ++i) {
        cin >> sizes[i] >> values[i];
    }
    cout << solve(knapsack_size, number_of_elements - 1) << endl;
    return 0;
}