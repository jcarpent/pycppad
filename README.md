PyCppAD — Python bindings for CppAD Automatic Differentiation library
======

<p align="center">
    <a href="https://opensource.org/licenses/BSD-3-Clause"><img src="https://img.shields.io/badge/License-BSD%203--Clause-green.svg" alt="License"/></a>
    <a href="https://anaconda.org/conda-forge/pycppad"><img src="https://img.shields.io/conda/dn/conda-forge/pycppad.svg" alt="Conda Downloads"/></a>
    <a href="https://anaconda.org/conda-forge/pycppad"><img src="https://img.shields.io/conda/vn/conda-forge/pycppad.svg" alt="Conda Version"/></a>
    <a href="https://conda.anaconda.org/conda-forge"><img src="https://anaconda.org/conda-forge/pycppad/badges/installer/conda.svg" alt="Anaconda-Server Badge"/></a>
</p>

**PyCppAD** is an open source framework which provides bindings for the CppAD Automatic Differentiation([CppAD](https://coin-or.github.io/CppAD/doc/cppad.htm)) C++ library in Python.
**PyCppAD** also includes support for the CppADCodeGen ([CppADCodeGen](https://github.com/joaoleal/CppADCodeGen)), C++ library, which exploits CppAD functionality to perform code generation.

## Installing PyCppAD

### Installation by source

#### Dependencies

PyCppAD dependes on the following dependencies:
* [Boost.Python)](http://boostorg.github.io/python/doc/html/index.html)
* [Eigen3](https://eigen.tuxfamily.org)
* [EigenPy](https://github.com/stack-of-tasks/eigenpy)
* [CppAD](https://coin-or.github.io/CppAD/doc/install.htm)
* Optionally, [CppADCodeGen](https://github.com/joaoleal/CppADCodeGen)

### Installation via `conda-forge`

Installing `pycppad` from the `conda-forge` channel can be achieved by adding `conda-forge` to your channels with:

```
conda config --add channels conda-forge
conda config --set channel_priority strict
```

Once the `conda-forge` channel has been enabled, `pycppad` can be installed with:

```
conda install pycppad
```


## Acknowledgments

The development of **PyCppAD** is supported by the [Willow team](https://www.di.ens.fr/willow/) [@INRIA](http://www.inria.fr).
