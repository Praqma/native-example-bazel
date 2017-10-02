#!/usr/bin/env bash

set -x

export DEBIAN_FRONTEND=noninteractive
export WORKSPACE_DIR=/workspace
export THIRDPARTY_DIR=${WORKSPACE_DIR}/3rdparty

if [ "$PWD" != "$WORKSPACE_DIR" ]; then
  echo "Test helper script to be run inside a container."
  echo "Go to $WORKSPACE_DIR directory before running this script."
  exit 1
fi

git submodule update --init --force

bazel clean --expunge
bazel test //testy:greety_test //testy:* --verbose_failures
