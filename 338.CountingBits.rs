impl Solution {
    pub fn count_bits(n: i32) -> Vec<i32> {
        let mut dp: Vec<i32> = vec![0; (n + 1) as usize]; 
        let mut sub: i32 = 1;

        for i in 1..=n { 
            if sub * 2 == i {
                sub = i;
            }
            dp[i as usize] = dp[(i - sub) as usize] + 1;
        }
        return dp;
    }
}