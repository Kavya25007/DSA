#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0)
                count0++;
            else if(nums[i] == 1)
                count1++;
            else
                count2++;
        }

        int index = 0;

        for(int i = 0; i < count0; i++) {
            nums[index++] = 0;
        }

        for(int i = 0; i < count1; i++) {
            nums[index++] = 1;
        }

        for(int i = 0; i < count2; i++) {
            nums[index++] = 2;
        }
    }
};

int main() {
    vector<int> nums = {2,0,2,1,1,0};

    Solution obj;
    obj.sortColors(nums);

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}

//Dutch National flag algorithm
/*Dutch National Flag Algorithm (DNF) ek famous algorithm hai jo Sort Colors jaise problems ko O(n) time aur O(1) space mein solve karta hai.

🧠 Idea

Array mein sirf 3 values hoti hain:

0 → red
1 → white
2 → blue

Goal: inko order mein arrange karna:

0 0 0 ... 1 1 1 ... 2 2 2
⚡ Three Pointers Concept

We use 3 pointers:

low  -> 0s boundary
mid  -> current element
high -> 2s boundary
🔥 Algorithm Logic
Rules:
if nums[mid] == 0
→ swap(nums[low], nums[mid])
→ low++, mid++
if nums[mid] == 1
→ mid++
if nums[mid] == 2
→ swap(nums[mid], nums[high])
→ high--*/