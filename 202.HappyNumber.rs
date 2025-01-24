impl Solution {
    pub fn is_happy(mut n: i32) -> bool {
        if (n < 10) {
            return n == 1 || n == 7;
        }
        let mut sum_digits: i32 = 0;
        while (n > 0) {
            let mut digit: i32 = n % 10;
            sum_digits += digit * digit;
            n = n / 10;
        }
        return Self::is_happy(sum_digits)
    }
}