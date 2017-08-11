package com.xyp.tiange.ndkdemo;

/**
 * User: xyp
 * Date: 2017/8/11
 * Time: 11:18
 */

public class NativeHelper {
    static {
        // 加载C代码库, 库的名称, 必须是CMakeLists.txt中指定的名称
        System.loadLibrary("native-lib");
    }
    //获取c代码中隐藏的key，apk java层的代码很容易反编译出来，但是jni中的c代码更安全
    public static native String getKey();

    //c语言中打印android日志
    public static native void printLog(String log);

}
