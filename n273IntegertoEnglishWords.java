import java.util.LinkedHashMap;
import java.util.Map;

public class n273IntegertoEnglishWords {
    private static final Map<Integer, String> numberToWordsMap = new LinkedHashMap<>() {{
        put(1000000000, "Billion");
        put(1000000, "Million");
        put(1000, "Thousand");
        put(100, "Hundred");
        put(90, "Ninety");
        put(80, "Eighty");
        put(70, "Seventy");
        put(60, "Sixty");
        put(50, "Fifty");
        put(40, "Forty");
        put(30, "Thirty");
        put(20, "Twenty");
        put(19, "Nineteen");
        put(18, "Eighteen");
        put(17, "Seventeen");
        put(16, "Sixteen");
        put(15, "Fifteen");
        put(14, "Fourteen");
        put(13, "Thirteen");
        put(12, "Twelve");
        put(11, "Eleven");
        put(10, "Ten");
        put(9, "Nine");
        put(8, "Eight");
        put(7, "Seven");
        put(6, "Six");
        put(5, "Five");
        put(4, "Four");
        put(3, "Three");
        put(2, "Two");
        put(1, "One");
    }};

    public String numberToWords(int num) {
        if (num == 0) {
            return "Zero";
        }

        for (Map.Entry<Integer, String> entry : numberToWordsMap.entrySet()) {
            if (num >= entry.getKey()) {
                String pref = (num >= 100) ? numberToWords(num / entry.getKey()) + " " : "";
                String unit = entry.getValue();
                String suff = (num % entry.getKey() == 0) ? "" : " " + numberToWords(num % entry.getKey());
                return pref + unit + suff;
            }
        }
        return "";
    }

    public static void main(String[] args) {
        n273IntegertoEnglishWords sol = new n273IntegertoEnglishWords();
        System.out.println(sol.numberToWords(123));
    }
}
