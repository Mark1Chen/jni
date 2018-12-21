package test.chenzhuo.jni_test.utils;

public class JniUtils {
    static {
        System.loadLibrary("jni_sample");
    }
    public static native String getJniString();
}
