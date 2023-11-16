public class NBioBSPCLIJNI {
    static {
        System.loadLibrary("NBioBSPCLIJNI");
        new NBioBSPCLIJNI().runStub();
    }

    public native void runStub();

    public static void main(String[] args) {
        new NBioBSPCLIJNI().runStub();
    }
}