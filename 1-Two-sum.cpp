class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int &target)
    {
        // Declare hashmap (unordered_map)
        std::unordered_map<int, int> map;
        //Declare loop variables
        int i, s = nums.size();
        //Loop over input nums
        for (i = 0; i < s; ++i)
        {
            /*  The algorithm has two steps:
				search the hashmap for a value that together with our current indexed value adds up to the target
			If not we add the current one to the map:
				Key: The value retrieved from the input (nums)
				Value: the current index.

            So say we have a vector [2, 7, 11, 15] with the target 9
            For the first iteration the map is empty; Thus there is nothing to find.
            So we add it! 
					map[nums[i]] = i 
					(map[2] = 0)

            Next iteration we do the same thing, except our search actually turns out true.
            Do we have a 9 - 7 (2) as a key in our map? yes, we do! 
            This means that our current value (7) plus the index we just found in our map (2) add up to the target.
            We thus return the value for map[2] which happens to be 0 and the current index that happens to be 1.
        */
            if (map.find(target - nums[i]) != map.end())
                return {map[target - nums[i]], i};
            else
                map[nums[i]] = i;
        }
        //If we iterate through all the numbers in vector and come up with nothing, we return {} since there is no solution.
        return {};
    }
};