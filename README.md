# Build with Bazel

[![CircleCI](https://circleci.com/gh/Praqma/native-example-bazel.png?style=shield&circle-token=df3dc5f6efbc2a267f7805f05a5e91d2878be9fd)](https://circleci.com/gh/Praqma/native-example-bazel)
![TravisCI Status](https://travis-ci.org/Praqma/native-example-bazel.svg?branch=master)

![](https://img.shields.io/github/stars/praqma/native-example-bazel.svg)
![](https://img.shields.io/github/forks/praqma/native-example-bazel.svg)
![](https://img.shields.io/github/watchers/praqma/native-example-bazel.svg)
![](https://img.shields.io/github/tag/praqma/native-example-bazel.svg)
![](https://img.shields.io/github/release/praqma/native-example-bazel.svg)
![](https://img.shields.io/github/issues/praqma/native-example-bazel.svg)

Building with [Bazel](https://bazel.build/).

See [native](https://github.com/Praqma/native) repository for more examples.

## Steps

* Build image: `./dockerize.sh`
* Run container: `./containerize.sh`
* Build example (inside container): `./build.sh`
* Test example (inside container): `./test.sh`
