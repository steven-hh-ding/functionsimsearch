// Copyright 2017 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FUNCTIONMINHASH_HPP
#define FUNCTIONMINHASH_HPP

#include <cstdint>
#include <vector>
#include "CodeObject.h"

uint32_t TruncateValue(uint32_t value, char bits);
void CalculateFunctionFingerprint(Dyninst::ParseAPI::Function* function,
  uint64_t cfg_hashes, uint64_t mnem_hashes, uint32_t bits_per_hash,
  std::vector<uint32_t>* output);

#endif // FUNCTIONMINHASH_HPP
