impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let mut buy: i32 = prices[0];
        let mut profit: i32 = 0;
        
        for i in 1..prices.len() {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
}