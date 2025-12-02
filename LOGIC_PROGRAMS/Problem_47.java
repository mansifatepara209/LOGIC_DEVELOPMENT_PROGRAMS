import java.util.*;

public class Problem_47 {
    public static int findMaximunPoint(int[] arr) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            int count = 0;
            for (int j = 0; j < arr.length; j++) {
                if (arr[i] == arr[j])
                    count++;
            }
            map.put(arr[i], count * count);
        }
        int point = 0;
        System.out.println(map);
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            point += entry.getValue();
        }
        return point;
    }
    public static void main(String[] args) {
        int[] arr = {1, 5, 5, 1 ,5 ,5 ,5};
        System.out.println("Maximum Point: " + findMaximunPoint(arr));
    }
}