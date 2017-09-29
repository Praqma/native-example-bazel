#!/usr/bin/env bash

set -x

export DEBIAN_FRONTEND=noninteractive
export WORKSPACE_DIR=/workspace
export THIRDPARTY_DIR=${WORKSPACE_DIR}/3rdparty

if [ "$PWD" != "$WORKSPACE_DIR" ]; then
  # Control will enter here if $DIRECTORY doesn't exists.
  echo "Go to /workspace directory before running this script."
  exit 1
fi

git submodule update --init --force

bazel clean --expunge
bazel build //mainy:mainy //liby:*
bazel run //mainy:mainy x y z

mkdir graphy
cd graphy
bazel query 'deps(//mainy:mainy)' --output graph > graph.in
dot -Tpng < graph.in > graph.png
bazel query --noimplicit_deps 'deps(//mainy:mainy)' --output graph > simplified_graph.in
dot -Tpng < simplified_graph.in > simplified_graph.png
cd -

bazel test //testy:greety_test //testy:* --verbose_failures
