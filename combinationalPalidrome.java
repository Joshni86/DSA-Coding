import java.util.*;

public class combinationalPalidrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int flag = 0;
        for (int i = 0; i < s.length(); i++) {
            flag = flag ^ (1 << (s.charAt(i) - 'a'));
        }
        if (flag == 0 || ((flag & (flag - 1)) == 0)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }

}
