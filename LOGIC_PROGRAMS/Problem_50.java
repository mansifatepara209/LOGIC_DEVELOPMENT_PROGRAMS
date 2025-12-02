//50
public class Problem_50 {
    public static void main(String[] args) {
        String s = "a!!!b.c.d,e'f,ghi";
        System.out.println(reverse(s));

        String s2 = "Ab,c,de!$";
        System.out.println(reverse(s2));
    }
    public static String reverse(String s) {
        char[] arr = s.toCharArray();
        int i = 0, j = arr.length - 1;
        while (i < j) {
            if (!Character.isLetter(arr[i])) {
                i++;
            }
            else if (!Character.isLetter(arr[j])) {
                j--;
            }
            else {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                i++;
                j--;
            }
        }
        return new String(arr);
    }
}