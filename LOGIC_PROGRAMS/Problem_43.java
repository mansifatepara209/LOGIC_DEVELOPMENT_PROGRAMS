// WAP for following Scenario.  
// A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3 steps at a time. The 
// task is to implement a method to count how many possible ways the child can run up the stairs.


//without uniqueness
import java.util.*;

public class Problem_43 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of staircase: ");
        int n = sc.nextInt();

        System.out.println("Number of ways are: " + countWays(n));
    }

    public static int countWays(int n) {
        if (n < 0)
            return 0;
        if (n == 0)
            return 1;
        return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
    }
}



//with uniquee
// import java.util.*;

// public class Problem_43 {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter number of stairs: ");
//         int n = sc.nextInt();

//         List<List<Integer>> result = new ArrayList<>();
//         findUniqueWays(n, new ArrayList<>(), result, 1); // start with hop 1

//         System.out.println("Number of unique ways: " + result.size());
//         // System.out.println("Unique ways:");
//         // for (List<Integer> way : result) {
//         //     System.out.println(way);
//         // }
//     }

//     // 'start' ensures non-decreasing order
//     public static void findUniqueWays(int n, List<Integer> path, List<List<Integer>> result, int start) {
//         if (n < 0) return;
//         if (n == 0) {
//             result.add(new ArrayList<>(path));
//             return;
//         }

//         for (int hop = start; hop <= 3; hop++) { // only consider hops >= start
//             path.add(hop);
//             findUniqueWays(n - hop, path, result, hop);
//             path.remove(path.size() - 1); // backtrack
//         }
//     }
// }