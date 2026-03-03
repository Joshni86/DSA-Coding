package threads;

public class Nworker implements Runnable {
    int n;

    public Nworker(int n) {
        this.n = n;
    }

    public void run() {
        for (int i = 1; i <= n; i++) {
            System.out.println("Inside thread with Runnable: " + i);
        }
    }
}
