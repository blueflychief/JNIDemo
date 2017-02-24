//
// Created by Administrator on 2/24/2017.
//

#include <string.h>
#include <jni.h>

jstring Java_infinite_com_jnidemo_jniClazz_TestString_helloWorldFromJNI(JNIEnv *env, jobject thiz) {
    return (*env)->NewStringUTF(env, "HelloWorld! I am from JNI !");
}


/*注意，这里jstring 表示返回值
       Java_infinite_com_jnidemo_jniClazz_TestString_helloWorldFromJNI
写法是：Java+Android工程的包名+Android工程的Activity名+方法名,点号用下划线表示，这个写法很严格。
包名：infinite_com_jnidemo_jniClazz
Activity名：TestString
方法名：helloWorldFromJNI
JNIEnv* env, jobject thiz是Native方法自带的参数，可以用来转换一个数据类型。也就是说其实这个helloWorldFromJNI是没有形参的。
*/