#ifndef EPP_LOG
//#define #ifndef MEDIA_BASE_FAKENETWORKINTERFACE_H_
#define EPP_LOG

#ifndef ALOGE_PP

#include <android/log.h>
#define ALOGE_PP(...) __android_log_print(ANDROID_LOG_ERROR, "logcat ppt", __VA_ARGS__)
#endif  // ALOGI


//#ifndef ALOGE

//#include <android/log.h>
//#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, "logcat ppt", __VA_ARGS__)
//#endif  // ALOGI


#endif  // EPP_LOG

