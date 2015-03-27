/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_postgresql_pljava_internal_LargeObject */

#ifndef _Included_org_postgresql_pljava_internal_LargeObject
#define _Included_org_postgresql_pljava_internal_LargeObject
#ifdef __cplusplus
extern "C" {
#endif
#undef org_postgresql_pljava_internal_LargeObject_INV_WRITE
#define org_postgresql_pljava_internal_LargeObject_INV_WRITE 131072L
#undef org_postgresql_pljava_internal_LargeObject_INV_READ
#define org_postgresql_pljava_internal_LargeObject_INV_READ 262144L
#undef org_postgresql_pljava_internal_LargeObject_IFS_RDLOCK
#define org_postgresql_pljava_internal_LargeObject_IFS_RDLOCK 1L
#undef org_postgresql_pljava_internal_LargeObject_IFS_WRLOCK
#define org_postgresql_pljava_internal_LargeObject_IFS_WRLOCK 2L
#undef org_postgresql_pljava_internal_LargeObject_SEEK_SET
#define org_postgresql_pljava_internal_LargeObject_SEEK_SET 0L
#undef org_postgresql_pljava_internal_LargeObject_SEEK_CUR
#define org_postgresql_pljava_internal_LargeObject_SEEK_CUR 1L
#undef org_postgresql_pljava_internal_LargeObject_SEEK_END
#define org_postgresql_pljava_internal_LargeObject_SEEK_END 2L
/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _create
 * Signature: (I)Lorg/postgresql/pljava/internal/Oid;
 */
JNIEXPORT jobject JNICALL Java_org_postgresql_pljava_internal_LargeObject__1create
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _drop
 * Signature: (Lorg/postgresql/pljava/internal/Oid;)I
 */
JNIEXPORT jint JNICALL Java_org_postgresql_pljava_internal_LargeObject__1drop
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _open
 * Signature: (Lorg/postgresql/pljava/internal/Oid;I)Lorg/postgresql/pljava/internal/LargeObject;
 */
JNIEXPORT jobject JNICALL Java_org_postgresql_pljava_internal_LargeObject__1open
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_postgresql_pljava_internal_LargeObject__1close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _getId
 * Signature: (J)Lorg/postgresql/pljava/internal/Oid;
 */
JNIEXPORT jobject JNICALL Java_org_postgresql_pljava_internal_LargeObject__1getId
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _length
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_postgresql_pljava_internal_LargeObject__1length
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _seek
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_org_postgresql_pljava_internal_LargeObject__1seek
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _tell
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_postgresql_pljava_internal_LargeObject__1tell
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _read
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_org_postgresql_pljava_internal_LargeObject__1read
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_postgresql_pljava_internal_LargeObject
 * Method:    _write
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_org_postgresql_pljava_internal_LargeObject__1write
  (JNIEnv *, jclass, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif