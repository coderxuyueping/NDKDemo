#include <jni.h>
#include <string>

extern "C"
 // 代表可以被 Java 调用
 JNIEXPORT
 // 返回值类型
 jstring
 //声明遵守JNI Java 调用C的规则
 JNICALL
 //只能在MainActivity调用
Java_com_xyp_tiange_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

