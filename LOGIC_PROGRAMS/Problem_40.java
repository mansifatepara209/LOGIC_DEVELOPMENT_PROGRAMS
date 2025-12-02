// Given 2 sorted arrays a[] and b[], each of size n, the task is to find the median of the array obtained 
// after merging a[] and b[]. 
// Input: a[] = [1, 12, 15, 26, 38], b[] = [2, 13, 17, 30, 45] 
// Output: 16 
// Explanation: The middle two elements are 15 and 17,  
// so median = (15 + 17)/2 = 16

import java.util.Arrays;
import java.util.Scanner;

public class Problem_40 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array1: ");
        int a1 = sc.nextInt();
        int a[] = new int[a1];
        System.out.println("Enter elements of the array1: ");
        for (int i = 0; i < a1; i++) {
            a[i] = sc.nextInt();
        }

        System.out.println("Enter size of the array2: ");
        int b1 = sc.nextInt();
        int b[] = new int[b1];
        System.out.println("Enter elements of the array2: ");
        for (int i = 0; i < b1; i++) {
            b[i] = sc.nextInt();
        }

        // merge arrays
        int merge[] = new int[a.length + b.length];
        for (int i = 0; i < a.length; i++) {
            merge[i] = a[i];
        }
        for (int i = 0; i < b.length; i++) {
            merge[a.length + i] = b[i];
        }

        // System.out.println("Merged Array was: ");
        // for (int i = 0; i < merge.length; i++) {
        //     System.out.print(merge[i] + " ");
        // }

        Arrays.sort(merge);
        // System.out.println("\nSorted array in accending order: \n" + Arrays.toString(merge));

        // find median
        double median;
        int totalLen = merge.length;
        if (totalLen % 2 != 0) {
            median = merge[totalLen / 2];
        } else {
            median = (merge[(totalLen / 2) - 1] + merge[totalLen / 2]) / 2;
        }
        System.out.println("Median is: " + median);
    }
}
