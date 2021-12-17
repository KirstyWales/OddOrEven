#include <iostream>
#include <vector>

std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

int sumOfOdd = 0;
int sumOfEven = 0;

int main() {
    for(int i=0; i < nums.size(); i++) {
        if (i % 2 == 0){
          sumOfEven += nums[i];
        } else {
          sumOfOdd += nums[i];
        }
    }
std::cout << "The total sum of Odd numbers are: " << sumOfOdd << ".\n";
std::cout << "The total sum of Even numbers are: " << sumOfEven << ".\n";

}
