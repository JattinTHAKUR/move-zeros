#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i =0 ;
        //loop from first to last index
        for (int j=0; j < nums.size() ; j++){
            if(nums[j] != 0 ){
                //swap zero with non zero value 
                swap (nums[j], nums[i]);
                i++;
                //humari non zero value i-th index pe aani chahaiye 

            }
        }
    }
};

int main() {
  cout << "nums";
}