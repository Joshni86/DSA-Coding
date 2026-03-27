import java.util.*;

public class ptwosthree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<List<Integer>> graph = new LinkedList<>();
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            graph.add(new LinkedList<>());
        }
        for (int i = 1; i <= n; i++) {
            int parent = sc.nextInt();
            graph.get(parent).add(i);

        }
        int color[] = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            color[i] = sc.nextInt();
        }
        int queries = sc.nextInt();
        Map<Integer, Integer> cache = new LinkedHashMap<>();
        while (queries-- > 0) {
            int streeroot = sc.nextInt(); // query root specified
            if (!cache.containsKey(streeroot)) {

            }

        }

    }
}
