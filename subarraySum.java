import java.util.*;

public class subarraySum {
    public static void main(String afadfk[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        int sum = 0, count = 0;
        Map<Integer, Integer> map = new LinkedHashMap<>();
        map.put(0, 1);
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (map.containsKey(sum - k)) {
                count += map.get(sum - k);
            }
            map.put(sum, map.getOrDefault(sum, 0) + 1);
        }
        System.out.println(count);
        sc.close();
    }
}
