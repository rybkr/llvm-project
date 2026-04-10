//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++03, c++11, c++14, c++17

// <stdfloat>

// namespace std {
//   using float16_t  = see below;
//   using float32_t  = see below;
//   using float64_t  = see below;
//   using float128_t = see below;
//   using bfloat16_t = see below;
// }

#include <stdfloat>
#include <type_traits>

#include "test_macros.h"

#if TEST_STD_VER >= 23
#  ifdef __STDCPP_FLOAT16_T__
static_assert(std::is_same_v<std::float16_t, _Float16>);
#  endif

#  ifdef __STDCPP_FLOAT32_T__
static_assert(std::is_same_v<std::float32_t, _Float32>);
#  endif

#  ifdef __STDCPP_FLOAT64_T__
static_assert(std::is_same_v<std::float64_t, _Float64>);
#  endif

#  ifdef __STDCPP_FLOAT128_T__
static_assert(std::is_same_v<std::float128_t, _Float128>);
#  endif

#  ifdef __STDCPP_BFLOAT16_T__
static_assert(std::is_same_v<std::bfloat16_t, __bf16>);
#  endif
#endif

int main(int, char**) { return 0; }
