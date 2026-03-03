import java.util.*;

// find out the substring that has no. of a=no. of b 
// the core is to find out two groups in a sequence
// group 1- add 1
// group2 - subtract 1
// first occurence map 
public class ababSubstring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int maxlen = 0;
        int ctr = 0;
        Map<Integer, Integer> fom = new LinkedHashMap<>();
        fom.put(0, -1);
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'a') {
                ctr++;
            } else {
                ctr--;
            }
            if (fom.containsKey(ctr)) {
                int temp = i - (fom.get(ctr));
                if (maxlen < temp) {
                    maxlen = temp;
                }
            } else {
                fom.put(ctr, i);
            }

        }
        System.out.println(maxlen);
    }

}
