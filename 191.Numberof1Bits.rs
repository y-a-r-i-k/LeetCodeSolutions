impl Solution {
    pub fn hamming_weight(n: i32) -> i32 {
        return format!("{n:b}").chars().filter(|c| *c == '1').count() as i32;
    }
}