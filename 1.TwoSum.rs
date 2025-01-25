impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        for i in 1..nums.len() {
            for r in i..nums.len() {
                let l = r - i;
                if nums[l] + nums[r] == target {
                    return vec![l as i32, r as i32];
                }
            }
        }
        let v: Vec<i32> = Vec::new();
        return v;
    }
}