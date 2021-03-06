/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_postgresql_pljava_internal_TupleDesc */

#ifndef _Included_org_postgresql_pljava_internal_TupleDesc
#define _Included_org_postgresql_pljava_internal_TupleDesc
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_postgresql_pljava_internal_TupleDesc
 * Method:    _free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_postgresql_pljava_internal_TupleDesc__1free
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_postgresql_pljava_internal_TupleDesc
 * Method:    _getColumnName
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_postgresql_pljava_internal_TupleDesc__1getColumnName
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_postgresql_pljava_internal_TupleDesc
 * Method:    _getColumnIndex
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_postgresql_pljava_internal_TupleDesc__1getColumnIndex
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_postgresql_pljava_internal_TupleDesc
 * Method:    _formTuple
 * Signature: (J[Ljava/lang/Object;)Lorg/postgresql/pljava/internal/Tuple;
 */
JNIEXPORT jobject JNICALL Java_org_postgresql_pljava_internal_TupleDesc__1formTuple
  (JNIEnv *, jclass, jlong, jobjectArray);

/*
 * Class:     org_postgresql_pljava_internal_TupleDesc
 * Method:    _getOid
 * Signature: (JI)Lorg/postgresql/pljava/internal/Oid;
 */
JNIEXPORT jobject JNICALL Java_org_postgresql_pljava_internal_TupleDesc__1getOid
  (JNIEnv *, jclass, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
