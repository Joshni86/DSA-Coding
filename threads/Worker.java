package threads;

public class Worker extends Thread {
    int n;

    public Worker(int n) {
        this.n = n;
    }

    public void run() {
        for (int i = 1; i <= n; i++) {
            System.out.println("Inside thread with extends " + i);
        }
    }
}
