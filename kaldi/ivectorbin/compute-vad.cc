// ivectorbin/compute-vad.cc

// Copyright  2013  Daniel Povey

// See ../../COPYING for clarification regarding multiple authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
// THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED
// WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE,
// MERCHANTABLITY OR NON-INFRINGEMENT.
// See the Apache 2 License for the specific language governing permissions and
// limitations under the License.

#include "ivectorbin/compute-vad.h"

void ComputeVad(const MatrixBase<BaseFloat> &feat,
                      Vector<BaseFloat> *vad_result) {
  try {
    using kaldi::int32;

    ParseOptions po("");
    bool omit_unvoiced_utts = false;
    po.Register("omit-unvoiced-utts", &omit_unvoiced_utts,
                "If true, do not write out voicing information for "
                "utterances that were judged 100% unvoiced.");
    VadEnergyOptions opts;
    opts.vad_energy_mean_scale = 0;
    opts.vad_energy_threshold = 2;
    opts.Register(&po);


     if (feat.NumRows() == 0) {
        KALDI_WARN << "Empty feature matrix ";
        return;
     }
     vad_result->Resize(feat.NumRows());
     ComputeVadEnergy(opts, feat, vad_result);
  } catch(const std::exception &e) {
    std::cerr << e.what();
    return;
  }
}

