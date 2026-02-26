import java.util.*;

class code {
    public static void main(String arhi[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] == 67) {
                System.out.println("Yes");
                break;
            }

        }

    }
}