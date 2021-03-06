/*
 *  Copyright 2016 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "pc/videotracksource.h"

#include <string>
#include <android/log.h>
#define ALOGI(...) __android_log_print(ANDROID_LOG_INFO, "logcat asyncsocket.cc", __VA_ARGS__)

namespace webrtc {

VideoTrackSource::VideoTrackSource(bool remote)
    : VideoTrackSource(nullptr, remote) {}

VideoTrackSource::VideoTrackSource(
    rtc::VideoSourceInterface<VideoFrame>* source,
    bool remote)
    : source_(source), state_(kInitializing), remote_(remote) {
  worker_thread_checker_.DetachFromThread();
}

void VideoTrackSource::SetState(SourceState new_state) {
  if (state_ != new_state) {
    state_ = new_state;
    FireOnChanged();
  }
}

void VideoTrackSource::AddOrUpdateSink(
    rtc::VideoSinkInterface<VideoFrame>* sink,
    const rtc::VideoSinkWants& wants) {
  ALOGI("ppt, in VideoTrackSource::AddOrUpdateSink, go in.\n");
  RTC_DCHECK(worker_thread_checker_.CalledOnValidThread());
  source()->AddOrUpdateSink(sink, wants);
}

void VideoTrackSource::RemoveSink(rtc::VideoSinkInterface<VideoFrame>* sink) {
  RTC_DCHECK(worker_thread_checker_.CalledOnValidThread());
  source()->RemoveSink(sink);
}

}  //  namespace webrtc
