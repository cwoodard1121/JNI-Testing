#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "Main.hpp"

// Main
namespace native_jvm::classes::__ngen_Main {

    char *string_pool;

    jstring cstrings[4];
    std::mutex cclasses_mtx[3];
    jclass cclasses[3];
    jmethodID cmethods[2];
    jfieldID cfields[1];

    // <init>()V
    void JNICALL __ngen_native_special_init0(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (void) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 25LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {};
        jvalue clocal0 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        return (void) 0;
    }
    
    // main([Ljava/lang/String;)V
    void JNICALL __ngen_native_main1(JNIEnv *env, jclass clazz, jarray arg0) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 25LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        jvalue clocal0 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = arg0; refs.insert(clocal0.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 4; Stack: 0
        // New stack: 0
        // INVOKESTATIC Main.sayHi()V; Stack: 0
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetStaticMethodID((cclasses[0]), ((char *)(string_pool + 73LL)), ((char *)(string_pool + 21LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[0]), (cmethods[0])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 5; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        return (void) 0;
    }
    
    // sayHi()V
    void JNICALL __ngen_native_sayHi2(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 25LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {};
        std::unordered_set<jobject> refs;
    
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 7; Stack: 0
        // New stack: 0
        // GETSTATIC java/lang/System.out Ljava/io/PrintStream;; Stack: 0
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[1]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 79LL)), ((char *)(string_pool + 83LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[1]), (cfields[0])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC hi! this is from native; Stack: 1
        cstack1.l = (cstrings[2]);
        // New stack: 2
        // INVOKEVIRTUAL java/io/PrintStream.println(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 105LL)), ((char *)(string_pool + 113LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 135LL)), ((char *)(string_pool + 166LL)), 7); else env->CallVoidMethod(cstack0.l, (cmethods[1]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 8; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        return (void) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_native_special_clinit3(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 25LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        std::unordered_set<jobject> refs;
    
    
        return (void) 0;
    }
    
    // native_special_init0()V
    void JNICALL __ngen_native_native_special_init04(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (void) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 25LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        return (void) 0;
    }
    
    // native_special_clinit3()V
    void JNICALL __ngen_native_native_special_clinit35(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 25LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        std::unordered_set<jobject> refs;
    
    
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();

        if (jstring str = env->NewStringUTF(((char *)(string_pool + 212LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[3] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 232LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[2] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 256LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[1] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 273LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[0] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }

        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 0LL)), (char *)((char *)(string_pool + 21LL)), (void *)&__ngen_native_special_init0 },
            { (char *)((char *)(string_pool + 45LL)), (char *)((char *)(string_pool + 50LL)), (void *)&__ngen_native_main1 },
            { (char *)((char *)(string_pool + 73LL)), (char *)((char *)(string_pool + 21LL)), (void *)&__ngen_native_sayHi2 },
            { (char *)((char *)(string_pool + 189LL)), (char *)((char *)(string_pool + 21LL)), (void *)&__ngen_native_special_clinit3 },
            { (char *)((char *)(string_pool + 0LL)), (char *)((char *)(string_pool + 21LL)), (void *)&__ngen_native_native_special_init04 },
            { (char *)((char *)(string_pool + 189LL)), (char *)((char *)(string_pool + 21LL)), (void *)&__ngen_native_native_special_clinit35 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 273LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}