//
// Created by shankar on 27/5/19.
//

#ifndef LATEST_COMPUTE_VAD_H
#define LATEST_COMPUTE_VAD_H

#include "base/kaldi-common.h"
#include "util/common-utils.h"
#include "matrix/kaldi-matrix.h"
#include "ivector/voice-activity-detection.h"

using namespace kaldi;

void ComputeVad(const MatrixBase<BaseFloat> &feat,
                Vector<BaseFloat> *vad_result);

#endif //LATEST_COMPUTE_VAD_H
