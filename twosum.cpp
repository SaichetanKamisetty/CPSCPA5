class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash_table;             // Create hash_table.

        for (int i = 0; i < nums.size(); i++) {            // Loop through nums vector
            int num_to_find = target - nums[i];     // Create variable that will find a addend of target
            if (hash_table.count(num_to_find)) {   // Check if a addend number is in the hash_table. 
                return { hash_table[num_to_find], i };     // If so, return index of the addend value 
                                                          // (hash_table[num_to_find]), and i, the current addend to be added for sum. 
            }
            else {
                hash_table[nums[i]] = i;       // If number not found, put the number to find in hash_table for next iteration. 
                                                    // possible addend as key, and value is the index. 
            }
        }

        return {};                                  // Nothing found, return an empty vector. 
    }
};
