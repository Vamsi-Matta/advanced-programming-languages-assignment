import java.util.ArrayList;
import java.util.List;

public class java_memory {
    public static void main(String[] args) {
        List<byte[]> blocks = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            blocks.add(new byte[10_000_000]);
        }
        System.out.println("Allocated about 50 MB of heap objects.");

        blocks.clear(); // Objects become unreachable and eligible for GC.
        blocks = null;
        System.gc();    // Request GC; collection timing is controlled by JVM.
        System.out.println("References cleared; memory is eligible for garbage collection.");
    }
}
