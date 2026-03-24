import java.util.*;

public class heap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // min heap
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        int n = sc.nextInt();
        while (n-- > 0) {
            pq.add(sc.nextInt());
        }
        while (!pq.isEmpty()) {
            System.out.print(pq.poll() + " ");
        }
        // max heap
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>();
        n = sc.nextInt();
        while (n-- > 0) {
            maxHeap.add(-sc.nextInt());
        }
        while (!pq.isEmpty()) {
            System.out.print(-maxHeap.poll() + " ");
        }
        sc.close();
    }
}
