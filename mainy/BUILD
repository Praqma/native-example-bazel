cc_library(
    name = "greety",
    srcs = ["greety.cc"],
    hdrs = ["greety.h"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "mainy",
    srcs = ["mainy.cc"],
    deps = [
        ":greety",
        "//liby:timey",
        "//liby:rectangley",
        "//liby:triangley",
    ],
)
