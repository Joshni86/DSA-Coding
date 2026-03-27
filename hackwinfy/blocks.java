
//test case1:
//1
//2
//1
//result is 6
//test case 2
//3
// 2 1 2
// 2 2 1
//result is 868
import java.util.*;

public class blocks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        PriorityQueue<Integer> a = new PriorityQueue<>(Collections.reverseOrder());
        PriorityQueue<Integer> b = new PriorityQueue<>();
        for (int i = 0; i < n; i++) {
            a.add(sc.nextInt());
        }
        for (int i = 0; i < n; i++) {
            b.add(sc.nextInt());
        }
        long ans = 0L;
        int mod = 1_000_000_007; // they said to modulo 10^9+7
        // we need to create the longest string with alternating blocks from A and B, so
        // if we consider the largest block in A (bcuz A only has blocks of 1bits) and
        // smallest block in B(bcuz B only has blocks of 0bits) and then create a binary
        // out of it, then that will maximum

        for (int i = 0; i < n; i++) {
            int ones = a.poll(); // max
            int zeroes = b.poll(); // min zeroes
            // but the binary string will be tooooo long and so they've asked us to print
            // the result with mod
            // but first to even hold that binary string and convert to decimal we dont hv
            // ds or space
            // hence we use chinese remainder theorem or the fact that if u modulo the
            // entire thing or just the digits, it will be the same answer
            // so let's modulo digit by digit (with places) so that we contain or limit the
            // term
            while (ones-- > 0) {
                ans = ((ans * 2) + 1) % mod; // all bits in block is 1 so +1 and *2 bcuz base is 2
            }
            while (zeroes-- > 0) {
                ans = (ans * 2) % mod;
            }
        }
        System.out.println(ans);
        sc.close();
    }
}
