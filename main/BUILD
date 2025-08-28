load("@rules_cc//cc:cc_binary.bzl", "cc_binary")

cc_binary(
    name = "game",
    srcs = ["main.cpp"],
    copts = [
        "-std:c++17",
    ],
    deps = [
        "//sfml:sfml-all",
    ],
)
