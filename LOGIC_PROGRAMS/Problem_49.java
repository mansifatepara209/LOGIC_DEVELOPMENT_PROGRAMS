//49
import java.util.*;

public class Problem_49 {
    public static void generate(int[] nums, int n, List<List<Integer>> res) {
        if (n == 1) {
            List<Integer> list = new ArrayList<>();
            for (int x : nums) list.add(x);
            res.add(list);
            return;
        }

        for (int i = 0; i < n; i++) {
            generate(nums, n - 1, res);

            if (n % 2 == 0) {
                int temp = nums[i];
                nums[i] = nums[n - 1];
                nums[n - 1] = temp;
            } else {
                int temp = nums[0];
                nums[0] = nums[n - 1];
                nums[n - 1] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int[] nums = {1,2,3};
        List<List<Integer>> res = new ArrayList<>();

        generate(nums, nums.length, res);

        System.out.println(res);
    }
}