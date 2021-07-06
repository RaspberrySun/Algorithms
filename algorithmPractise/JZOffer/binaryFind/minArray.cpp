//
// Created by hp on 2021/7/6.
//


/**
 * @author RaspberrySun@outlook.com
 * @Date 2021/4/20 10:21
 */
#include <vector>


class Solution {
public:
    int minArray(std::vector<int>& numbers) {
        int low = 0;
        int high = numbers.size() - 1;
        while (low < high){
            int temp = low + (high - low) / 2;
            if (numbers[temp] < numbers[high]){
                high = temp;
            }else if(numbers[temp] > numbers[high]){
                low = temp + 1;
            }else{
                high--;
            }
        }
        return numbers[low];
    }
};