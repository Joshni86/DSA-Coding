import java.util.*;

public class ptwosone {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int q = sc.nextInt();
        int queries[][] = new int[q][4];
        for (int i = 0; i < q; i++) {
            for (int j = 0; j < q; j++) {
                queries[i][j] = sc.nextInt();
            }
        }
        int l = 0, r = 0;
        for (int i = q - 1; i >= 0; i--) {

        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        System.out.println(sum);

    }
}
