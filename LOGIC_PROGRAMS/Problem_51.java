//51
public class Problem_51 {
    static int minCoins = Integer.MAX_VALUE;
    public static void main(String[] args) {
        int coins[] = {5,7,1};
        int sum = 14 ;
        int n = coins.length;
        
        tryAllPermutations(coins, 0, n, sum);
        
        if (minCoins == Integer.MAX_VALUE) {
            System.out.println("Not possible.");
        } else {
            System.out.println("Minimum coins required: " + minCoins);
        }
    }
    static void tryAllPermutations(int[] coins, int start, int n, int sum) {
        if (start == n - 1) {
            applyGreedy(coins, sum);
            return;
        }
        for (int i = start; i < n; i++) {
            swap(coins, start, i);
            tryAllPermutations(coins, start + 1, n, sum);
            swap(coins, start, i);
        }
    }
    static void applyGreedy(int[] coins, int sum) {
        int remainingSum = sum;
        int totalCoins = 0;   
        for (int i = 0; i < coins.length; i++) {
            if (coins[i] <= remainingSum) {
                int count = remainingSum / coins[i];
                totalCoins += count;
                remainingSum = remainingSum % coins[i];
            }
        }
                if (remainingSum == 0) {
            minCoins = Math.min(minCoins, totalCoins);
        }
    }
    
    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}