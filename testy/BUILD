cc_test(
    name = "greety_test",
    srcs = ["greety_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
        "//mainy:greety",
        "//liby:timey",
    ],
)

cc_test(
    name = "shapey_test",
    srcs = ["shapey_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
        "//liby:shapey",
    ],
)

cc_test(
    name = "rectangley_test",
    srcs = ["rectangley_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
        "//liby:rectangley",
    ],
)

cc_test(
    name = "triangley_test",
    srcs = ["triangley_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
        "//liby:triangley",
    ],
)