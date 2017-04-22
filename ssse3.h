/* Copyright (c) 2017 Evan Nemerson <evan@nemerson.com>
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#if !defined(SIMDE__SSSE3_H) || defined(SIMDE_MULTIPLE_INCLUDES)
#  if !defined(SIMDE__SSSE3_H)
#    define SIMDE__SSSE3_H
#  endif
#  include "sse3.h"

#  if defined(SIMDE_SSSE3_NATIVE)
#    undef SIMDE_SSSE3_NATIVE
#  endif
#  if defined(SIMDE_SSSE3_FORCE_NATIVE)
#    define SIMDE_SSSE3_NATIVE
#  elif defined(__SSSE3__) && (!defined(SIMDE_SSSE3_NO_NATIVE) && !defined(SIMDE_NO_NATIVE))
#    define SIMDE_SSSE3_NATIVE
#  endif

#  if defined(SIMDE_SSSE3_NATIVE) && !defined(SIMDE_SSE3_NATIVE)
#    if defined(SIMDE_SSSE3_FORCE_NATIVE)
#      error Native SSSE3 support requires native SSE3 support
#    else
#      warning Native SSSE3 support requires native SSE3 support, disabling
#      undef SIMDE_SSSE3_NATIVE
#    endif
#  endif

#  if defined(SIMDE_SSSE3_NATIVE)
#    include <tmmintrin.h>
#  endif

#endif /* !defined(SIMDE__SSE2_H) */
