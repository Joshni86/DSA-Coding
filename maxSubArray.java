//given an array of length n, find the max length of strictly increasing sub array

import java.util.*;

class maxSubArray {
    public static void main(String args[]) {
        int[] arr = { 20, 5, 2, 10, 7, 14, 11, 5, 25, 40 };
        int n = 10;
        int len[] = new int[n];
        Arrays.fill(len, 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[j] < arr[i]) {
                    len[i] = Math.max(len[i], len[j] + 1);
                }
            }
        }
        Arrays.sort(len);
        System.out.println(len[n - 1]);

        // finding max
        // int max=0;
        // for(int i=0;i<n;i++)
        // {
        // max=Math.max(max,arr[i]);
        // }
    }
}