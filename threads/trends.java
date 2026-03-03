package threads;

public class trends {
    public static void main(String[] args) {
        Worker w = new Worker(5);
        Nworker nw = new Nworker(10);
        Thread nt = new Thread(nw);
        w.start();
        nt.start();
    }
}
