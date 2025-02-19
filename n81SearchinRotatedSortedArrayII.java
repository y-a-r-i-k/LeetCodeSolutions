class n81SearchinRotatedSortedArrayII {
    public boolean main(int[] nums, int target) {
        int l = 0, r = nums.length - 1;
        
        while (l <= r) {
            int mid = (l + r) / 2;
            
            if (nums[mid] == target) {
                return true;
            }

            if (nums[l] == nums[mid]) {
                ++l;
                continue;
            }

            if (nums[l] <= nums[mid]) {
                if ((nums[l] <= target) && nums[mid] >= target) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if ((nums[mid] <= target) && (target <= nums[r])) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

        }

        return false;
    }   
}