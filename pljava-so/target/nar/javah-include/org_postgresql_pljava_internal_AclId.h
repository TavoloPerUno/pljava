/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_postgresql_pljava_internal_AclId */

#ifndef _Included_org_postgresql_pljava_internal_AclId
#define _Included_org_postgresql_pljava_internal_AclId
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_postgresql_pljava_internal_AclId
 * Method:    _getUser
 * Signature: ()Lorg/postgresql/pljava/internal/AclId;
 */
JNIEXPORT jobject JNICALL Java_org_postgresql_pljava_internal_AclId__1getUser
  (JNIEnv *, jclass);

/*
 * Class:     org_postgresql_pljava_internal_AclId
 * Method:    _getSessionUser
 * Signature: ()Lorg/postgresql/pljava/internal/AclId;
 */
JNIEXPORT jobject JNICALL Java_org_postgresql_pljava_internal_AclId__1getSessionUser
  (JNIEnv *, jclass);

/*
 * Class:     org_postgresql_pljava_internal_AclId
 * Method:    _fromName
 * Signature: (Ljava/lang/String;)Lorg/postgresql/pljava/internal/AclId;
 */
JNIEXPORT jobject JNICALL Java_org_postgresql_pljava_internal_AclId__1fromName
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_postgresql_pljava_internal_AclId
 * Method:    _getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_postgresql_pljava_internal_AclId__1getName
  (JNIEnv *, jobject);

/*
 * Class:     org_postgresql_pljava_internal_AclId
 * Method:    _hasSchemaCreatePermission
 * Signature: (Lorg/postgresql/pljava/internal/Oid;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_postgresql_pljava_internal_AclId__1hasSchemaCreatePermission
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_postgresql_pljava_internal_AclId
 * Method:    _isSuperuser
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_postgresql_pljava_internal_AclId__1isSuperuser
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
