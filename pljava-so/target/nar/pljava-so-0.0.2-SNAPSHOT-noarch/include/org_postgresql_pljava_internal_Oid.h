/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_postgresql_pljava_internal_Oid */

#ifndef _Included_org_postgresql_pljava_internal_Oid
#define _Included_org_postgresql_pljava_internal_Oid
#ifdef __cplusplus
extern "C" {
#endif
#undef org_postgresql_pljava_internal_Oid_serialVersionUID
#define org_postgresql_pljava_internal_Oid_serialVersionUID -8742448824652078965LL
/*
 * Class:     org_postgresql_pljava_internal_Oid
 * Method:    _forTypeName
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_postgresql_pljava_internal_Oid__1forTypeName
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_postgresql_pljava_internal_Oid
 * Method:    _forSqlType
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_postgresql_pljava_internal_Oid__1forSqlType
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_postgresql_pljava_internal_Oid
 * Method:    _getTypeId
 * Signature: ()Lorg/postgresql/pljava/internal/Oid;
 */
JNIEXPORT jobject JNICALL Java_org_postgresql_pljava_internal_Oid__1getTypeId
  (JNIEnv *, jclass);

/*
 * Class:     org_postgresql_pljava_internal_Oid
 * Method:    _getJavaClassName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_postgresql_pljava_internal_Oid__1getJavaClassName
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
