// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose 
// sum is equal to K.  
// Input: N = 4, K = 6, arr[] = {1, 5, 7, 1} Output: 2 

import java.util.HashMap;
import java.util.Scanner;

public class Problem_36 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Array Size: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter elements of the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter k: ");
        int k = sc.nextInt();

        System.out.println("Pairs Count: " + pairsCount(arr, n, k));
    }

    static int pairsCount(int arr[], int n, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int complement = k - arr[i];
            if (map.containsKey(complement)) {
                count = count + map.get(complement);
            }
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }
        return count;
    }
}
