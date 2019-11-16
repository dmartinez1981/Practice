
#include <iostream>
#include <vector>
#include  <algorithm> 

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<int> tempV = nums; // temp vector for sorting
        sort(tempV.begin(),tempV.end()); // sort temp

        vector<int> answer; // answer vector

        int left = 0, right = tempV.size()-1; // left and right starting position
        
        for(int i = 0; i < tempV.size(); i++){
            if(tempV[left] + tempV[right] == target){ // if left and right add up stop
                break;
            }
            else if( tempV[left] + tempV[right] < target ){ // else increment left
                left++;
            }
            else // else if greater than decrement right
                right--; 
        }

        // at this point you have the 2 values that add up to target
        // but not their actual index
        
        for(int i = 0; i < tempV.size(); i++){  // finds position of value in original nums
            if( tempV[left] == nums[i]){  // pushes left value as first element
                answer.push_back(i); 
                break;
            }
        }
        
        for(int i = tempV.size()-1; i >= 0; i--){ // does same as above but from right to left
            if( tempV[right] == nums[i]){   // to avoid hitting the same index if the 2 values
                answer.push_back(i);        // are equal
                break;
            }
        }

        return answer;
    } 
};

int main()
{
    Solution result;
    vector<int> nums{0,1,2, 3, 4,5};
    int target;
    target = 9;
    vector<int> result2 = result.twoSum(nums, target);

    int n = result2.size();
    int arr[n];

    for (int p = 0; p < n; p++)
        arr[p] = result2[p];
            
    int i=7;
}
