// Find a next lexicographical order string from a given string, if input is abc output is acb (2 conditions must 
// be followed: the string must be greater than the inputted string and the outputted string must be the 
// smallest string from all possible strings). 


public class Problem_44 {
    public static String nextString(String s) {
        char[] arr = s.toCharArray();
        int n = arr.length;
        int i = n - 2;
        while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
        }
        if (i < 0) return "No higher string";
        int j = n - 1;
        while (arr[j] <= arr[i]) {
            j--;
        }
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        int left = i + 1, right = n - 1;
        while (left < right) {
            char t = arr[left];
            arr[left] = arr[right];
            arr[right] = t;
            left++;
            right--;
        }

        return new String(arr);
    }

    public static void main(String[] args) {
        System.out.println(nextString("abc"));
        System.out.println(nextString("abdc"));
        System.out.println(nextString("cba")); 
    }
}