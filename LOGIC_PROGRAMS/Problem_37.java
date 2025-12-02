//WAP to multiply two matrices with error checking for dimension compatibility.

import java.util.Scanner;

public class Problem_37 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // size and elements for matrix 1
        System.out.println("Enter rows for matrix1: ");
        int r1 = sc.nextInt();
        System.out.println("Enter Colmuns for matrix1: ");
        int c1 = sc.nextInt();

        int[][] m1 = new int[r1][c1];
        System.out.println("Enter elements of the matrix1: ");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                m1[i][j] = sc.nextInt();
            }
        }

        // size and elemens for matrix2
        System.out.println("Enter rows for matrix2: ");
        int r2 = sc.nextInt();
        System.out.println("Enter columnss for matrix2: ");
        int c2 = sc.nextInt();

        int[][] m2 = new int[r2][c2];
        System.out.println("Enter elements of the matrix2: ");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                m2[i][j] = sc.nextInt();
            }
        }

        // check compatibility
        if (c1 != r2) {
            System.out.println("Error: Matrices cannot be multiplied (columns of Matrix1 != rows of Matrix2).");
            return;
        }

        int[][] m3 = new int[r1][c2];

        // multiply matrix
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        // display matrix
        System.out.println("\nResultant matrix: ");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                System.out.print(m3[i][j] + " ");
            }
            System.out.println();
        }
    }
}