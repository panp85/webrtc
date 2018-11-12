#ifndef PP_LOG
//#define #ifndef MEDIA_BASE_FAKENETWORKINTERFACE_H_
#define PP_LOG
#include "log_epp.h"
#ifndef ALOGI

#include <android/log.h>
#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, "logcat ppt", __VA_ARGS__)
#endif  // ALOGI


//#ifndef ALOGE

//#include <android/log.h>
//#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, "logcat ppt", __VA_ARGS__)
//#endif  // ALOGI


#endif  // PP_LOG

