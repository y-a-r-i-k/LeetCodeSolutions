impl Solution {
    pub fn add_to_array_form(num: Vec<i32>, k: i32) -> Vec<i32> {
        let mut k = k;
        let mut res = Vec::new();
        let mut i = num.len();
        let mut carry = 0;

        while i > 0 || k > 0 || carry > 0 {
            if i > 0 {
                carry += num[i - 1];
                i -= 1;
            }

            carry += k % 10;
            k /= 10;

            res.push(carry % 10);
            carry /= 10;
        }
        res.reverse();
        res
    }
}