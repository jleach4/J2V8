/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_eclipsesource_v8_V8Impl */

#ifndef _Included_com_eclipsesource_v8_V8Impl
#define _Included_com_eclipsesource_v8_V8Impl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _createIsolate
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8Impl__1createIsolate
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _release
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8Impl__1release
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _contains
 * Signature: (ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8Impl__1contains
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _getKeys
 * Signature: (I)Ljava/util/Collection;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1getKeys
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _getType
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8Impl__1getType
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _getInteger
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8Impl__1getInteger
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _getBoolean
 * Signature: (ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8Impl__1getBoolean
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _getDouble
 * Signature: (ILjava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8Impl__1getDouble
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _getString
 * Signature: (ILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8Impl__1getString
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _getArray
 * Signature: (ILjava/lang/String;)Lcom/eclipsesource/v8/V8Array;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1getArray
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _getObject
 * Signature: (ILjava/lang/String;)Lcom/eclipsesource/v8/V8Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1getObject
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _createParameterList
 * Signature: (II)Lcom/eclipsesource/v8/V8Array;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1createParameterList
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeIntFunction
 * Signature: (ILjava/lang/String;Lcom/eclipsesource/v8/V8Array;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8Impl__1executeIntFunction
  (JNIEnv *, jobject, jint, jstring, jobject);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeDoubleFunction
 * Signature: (ILjava/lang/String;Lcom/eclipsesource/v8/V8Array;)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8Impl__1executeDoubleFunction
  (JNIEnv *, jobject, jint, jstring, jobject);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeStringFunction
 * Signature: (ILjava/lang/String;Lcom/eclipsesource/v8/V8Array;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8Impl__1executeStringFunction
  (JNIEnv *, jobject, jint, jstring, jobject);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeBooleanFunction
 * Signature: (ILjava/lang/String;Lcom/eclipsesource/v8/V8Array;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8Impl__1executeBooleanFunction
  (JNIEnv *, jobject, jint, jstring, jobject);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeArrayFunction
 * Signature: (ILjava/lang/String;Lcom/eclipsesource/v8/V8Array;)Lcom/eclipsesource/v8/V8Array;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1executeArrayFunction
  (JNIEnv *, jobject, jint, jstring, jobject);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeObjectFunction
 * Signature: (ILjava/lang/String;Lcom/eclipsesource/v8/V8Array;)Lcom/eclipsesource/v8/V8Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1executeObjectFunction
  (JNIEnv *, jobject, jint, jstring, jobject);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeVoidFunction
 * Signature: (ILjava/lang/String;Lcom/eclipsesource/v8/V8Array;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8Impl__1executeVoidFunction
  (JNIEnv *, jobject, jint, jstring, jobject);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _add
 * Signature: (ILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8Impl__1add__ILjava_lang_String_2I
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _add
 * Signature: (ILjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8Impl__1add__ILjava_lang_String_2Z
  (JNIEnv *, jobject, jint, jstring, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _add
 * Signature: (ILjava/lang/String;D)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8Impl__1add__ILjava_lang_String_2D
  (JNIEnv *, jobject, jint, jstring, jdouble);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _add
 * Signature: (ILjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8Impl__1add__ILjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jobject, jint, jstring, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _addObject
 * Signature: (ILjava/lang/String;)Lcom/eclipsesource/v8/V8Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1addObject
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _addArray
 * Signature: (ILjava/lang/String;I)Lcom/eclipsesource/v8/V8Array;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1addArray
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _registerJavaMethod
 * Signature: (ILjava/lang/Object;Ljava/lang/String;[Ljava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8Impl__1registerJavaMethod
  (JNIEnv *, jobject, jint, jobject, jstring, jobjectArray);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeIntScript
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8Impl__1executeIntScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeDoubleScript
 * Signature: (ILjava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8Impl__1executeDoubleScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeStringScript
 * Signature: (ILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8Impl__1executeStringScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeBooleanScript
 * Signature: (ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8Impl__1executeBooleanScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeArrayScript
 * Signature: (ILjava/lang/String;)Lcom/eclipsesource/v8/V8Array;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1executeArrayScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeObjectScript
 * Signature: (ILjava/lang/String;)Lcom/eclipsesource/v8/V8Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8Impl__1executeObjectScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8Impl
 * Method:    _executeVoidScript
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8Impl__1executeVoidScript
  (JNIEnv *, jobject, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
