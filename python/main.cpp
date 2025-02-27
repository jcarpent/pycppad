/*
 * Copyright 2021 INRIA
 */

#include <Eigen/Core>
#include <eigenpy/eigenpy.hpp>

#include "pycppad/cppad.hpp"
#include "pycppad/ad.hpp"
#include "pycppad/independent.hpp"


BOOST_PYTHON_MODULE(pycppad)
{
  enum { Options = 0 };
  
  eigenpy::enableEigenPy();
  pycppad::enablePyCppAD();
};
