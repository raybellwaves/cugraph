/*
 * Copyright (c) 2019-2024, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <algorithm>
#include <random>
#include <vector>

namespace cugraph {
namespace test {

template <typename T, typename L>
std::vector<T> random_vector(L size, unsigned seed = 0)
{
  std::default_random_engine gen(seed);
  std::uniform_real_distribution<T> dist(0.0, 1.0);
  std::vector<T> v(size);
  std::generate(v.begin(), v.end(), [&] { return dist(gen); });
  return v;
}

}  // namespace test
}  // namespace cugraph
