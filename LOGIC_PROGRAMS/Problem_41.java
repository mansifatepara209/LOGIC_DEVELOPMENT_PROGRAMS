// You are given n disks placed on a starting rod (from), with the smallest disk on top and the largest at the 
// bottom. There are three rods: the starting rod(from), the target rod (to), and an auxiliary rod (aux). 
// You have to calculate the total number of moves required to transfer all n disks from the starting rod to 
// the target rod, following these rules: 
// 1. Only one disk can be moved at a time. 
// 2. A disk can only be placed on top of a larger disk or on an empty rod. 
// Return the number of moves needed to complete the task. 
// Input: n = 3 
// Output: 7 
// Explanation: For N=3, steps will be as follows in the example and total 7 steps will be taken. 
// move disk 1 from rod 1 to rod 3 
// move disk 2 from rod 1 to rod 2 
// move disk 1 from rod 3 to rod 2
// move disk 3 from rod 1 to rod 3 
// move disk 1 from rod 2 to rod 1 
// move disk 2 from rod 2 to rod 3 
// move disk 1 from rod 1 to rod 3

import java.util.*;

public class Problem_41 {

    // Function to calculate total moves for Tower of Hanoi
    public static long towerOfHanoiMoves(int n) {
        return (long)Math.pow(2, n) - 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of disks n: ");
        int n = sc.nextInt();

        long moves = towerOfHanoiMoves(n);

        System.out.println("Total moves required: " + moves);
    }
}
