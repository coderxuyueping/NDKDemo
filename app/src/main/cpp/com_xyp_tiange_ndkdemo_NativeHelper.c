//
// Created by tianGe on 2017/8/11.
//

#include "com_xyp_tiange_ndkdemo_NativeHelper.h"
#include <jni.h>
#include <android/log.h>
//创建C/C++文件; 如果一个类中有一个native的方法, 那么对应的C方法: Java_包名类名方法名(JNIEnv *env, ...);
 JNIEXPORT jstring JNICALL
 Java_com_xyp_tiange_ndkdemo_NativeHelper_getKey(JNIEnv *env, jclass type){
     char* key = "djflksdjlafjwenlksdjflksdjkfj";
     return (*env)->NewStringUTF(env, key);
 }


JNIEXPORT jstring JNICALL
Java_com_xyp_tiange_ndkdemo_NativeHelper_printLog(JNIEnv *env, jclass typ, jstring str_){
    const char *str = (*env)->GetStringUTFChars(env, str_, 0);
    //TODO: 显示Android 的日志
    // 调用Android的代码
    // 代码需要调用系统的日志库, 这个库已经在 CMakeList.txt添加了,因此可以直接调用
    const char *tag = "NativeHelper";
//    jstring -> char*
    jboolean b = JNI_FALSE;
    const char* txt = (*env)->GetStringUTFChars(env, str_, b);
    //打印log日志
    __android_log_write(ANDROID_LOG_DEBUG, tag, txt);
    //释放string
    (*env)->ReleaseStringUTFChars(env, str_, str);
}
