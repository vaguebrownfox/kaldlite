#pragma once

#include "base/kaldi-common.h"
#include "util/common-utils.h"
#include "feat/feature-mfcc.h"
#include "feat/wave-reader.h"
#include "feat/resample.h"
#include "matrix/kaldi-matrix.h"
#include "transform/cmvn.h"

using namespace kaldi;

extern int samp_freq;
extern int addDeltas;
extern int apply_cmvn;
extern int apply_vad_be;
extern int apply_vad;
extern Vector<BaseFloat> vad_result;
Matrix<BaseFloat> compute_mfcc_feats(const char* audiofilepath);
