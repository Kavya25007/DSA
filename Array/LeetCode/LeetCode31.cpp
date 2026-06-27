/*Next Permutation:

Step 1: Find Pivot

    Right side se traverse karo aur find karo:
    a[i] < a[i+1]

    👉 is index ko bolte hain pivot
    Agar pivot nahi mila → array reverse kar do (last permutation)

Step 2: Find just greater element

    Right side se find karo element jo:
    a[j] > a[i]

    👉 pivot ke just bada element

Step 3: Swap
    swap(a[i], a[j])

Step 4: Reverse suffix

    Pivot ke baad ka part reverse karo:
    reverse(a.begin() + i + 1, a.end())     
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int i = n - 2;

        // Step 1: find pivot
        while(i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }

        // Step 2: if pivot exists
        if(i >= 0) {

            int j = n - 1;

            while(nums[j] <= nums[i]) {
                j--;
            }

            swap(nums[i], nums[j]);
        }

        // Step 3: reverse right side
        reverse(nums.begin() + i + 1, nums.end());
    }
};