#!/usr/bin/env bash

docker build --tag praqma/native-bazel:latest --file ${PWD}/Dockerfile ${PWD}
