#!/usr/bin/env bash

set -x

export DEBIAN_FRONTEND=noninteractive
export WORKSPACE_DIR=/workspace
export THIRDPARTY_DIR=${WORKSPACE_DIR}/3rdparty

if [ "$PWD" != "$WORKSPACE_DIR" ]; then
  echo "Build helper script to be run inside a container."
  echo "Go to $WORKSPACE_DIR directory before running this script."
  exit 1
fi

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