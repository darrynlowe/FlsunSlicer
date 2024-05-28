// This file is part of libigl, a simple c++ geometry processing library.
// 
// Copyright (C) 2013 Alec Jacobson <alecjacobson@gmail.com>
// 
// This Source Code Form is subject to the terms of the Mozilla Public License 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.
#include "quat_conjugate.h"

template <typename Q_type>
IGL_INLINE void igl::quat_conjugate(
  const Q_type *q1, 
  Q_type *out)
{
  out[0] = -q1[0];
  out[1] = -q1[1];
  out[2] = -q1[2];
  out[3] = q1[3];
}

#ifdef IGL_STATIC_LIBRARY
// Explicit template instantiation
// generated by autoexplicit.sh
template void igl::quat_conjugate<double>(double const*, double*);
// generated by autoexplicit.sh
template void igl::quat_conjugate<float>(float const*, float*);
#endif
