import java.util.*;

public class decreasing {
    static Scanner sc = new Scanner(System.in);

    public static void solve() {
        int n = sc.nextInt();
        int arr[] = new int[n];
        boolean dec = false;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                dec = true;
                break;
            }
        }
        System.out.println(dec ? 1 : n);

    }

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }
    }
}