/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "../../../../../../AppData/Local/Android/Sdk/ndk/21.1.6352462/toolchains/llvm/prebuilt/windows-x86_64/sysroot/usr/include/jni.h"
/* Header for class com_example_facedetector_FaceDetector */

#ifndef _Included_com_example_facedetector_FaceDetector
#define _Included_com_example_facedetector_FaceDetector
#ifdef __cplusplus
extern "C" {
#endif
#undef com_example_facedetector_FaceDetector_REQUEST_IMAGE_CAPTURE
#define com_example_facedetector_FaceDetector_REQUEST_IMAGE_CAPTURE 1L
#undef com_example_facedetector_FaceDetector_CAMERA_PERMISSION_REQUEST_CODE
#define com_example_facedetector_FaceDetector_CAMERA_PERMISSION_REQUEST_CODE 200L
/*
 * Class:     com_example_facedetector_FaceDetector
 * Method:    loadCascade
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_example_facedetector_FaceDetector_loadCascade
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_example_facedetector_FaceDetector
 * Method:    detect
 * Signature: (JJJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_example_facedetector_FaceDetector_detect
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
