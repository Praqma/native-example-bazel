FROM openjdk:8

RUN apt-get update \
  && apt-get install --yes \
  build-essential \
  graphviz

RUN cd ${HOME} \
  && wget --quiet https://github.com/bazelbuild/bazel/releases/download/0.5.4/bazel-0.5.4-installer-linux-x86_64.sh \
  && chmod +x bazel-0.5.4-installer-linux-x86_64.sh \
  && ./bazel-0.5.4-installer-linux-x86_64.sh --user \
  && ln -s ${HOME}/bin/bazel /usr/local/bin/bazel

RUN apt-get clean \
  && rm -rf /var/lib/apt/lists/* \
  && rm -rf /tmp/* \
  && rm -rf /var/tmp/*
