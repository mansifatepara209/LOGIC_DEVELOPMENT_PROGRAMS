//52
public class Problem_52 {
    public static void main(String[] args) {
        String str1 = "abcabcabc";
        String str2 = "aabaabaabaab";
        String str3 = "abcdabc";

        System.out.println(canBeFormed(str1)); 
        System.out.println(canBeFormed(str2)); 
        System.out.println(canBeFormed(str3)); 
    }

    public static boolean canBeFormed(String str) {
        int len = str.length();
        for (int i = 1; i <= len / 2; i++) {
            if (len % i == 0) {
                String part = str.substring(0, i);
                StringBuilder repeated = new StringBuilder();
                for (int j = 0; j < len / i; j++) {
                    repeated.append(part);
                }
                if (repeated.toString().equals(str)) {
                    return true;
                }
            }
        }
        return false;
    }
}