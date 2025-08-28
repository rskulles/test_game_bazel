load("@rules_cc//cc:cc_import.bzl", "cc_import")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_import(
    name = "sfml-system",
    hdrs = glob(["compiled/include/SFML/System/**"]) + [
        "compiled/include/SFML/Config.hpp",
        "compiled/include/SFML/System.hpp",
    ],
    interface_library = "compiled/lib/sfml-system.lib",
    shared_library = "compiled/bin/sfml-system-3.dll",
)

cc_import(
    name = "sfml-window",
    hdrs = glob(["compiled/include/SFML/Window/**"]) + ["compiled/include/SFML/Window.hpp"],
    interface_library = "compiled/lib/sfml-window.lib",
    shared_library = "compiled/bin/sfml-window-3.dll",
)

cc_import(
    name = "sfml-graphics",
    hdrs = glob(["compiled/include/SFML/Graphics/**"]) + [
        "compiled/include/SFML/Config.hpp",
        "compiled/include/SFML/Graphics.hpp",
        "compiled/include/SFML/OpenGL.hpp",
    ],
    interface_library = "compiled/lib/sfml-graphics.lib",
    shared_library = "compiled/bin/sfml-graphics-3.dll",
)

cc_import(
    name = "sfml-audio",
    hdrs = glob(["compiled/include/SFML/Audio/**"]) + ["compiled/include/SFML/Audio.hpp"],
    interface_library = "compiled/lib/sfml-audio.lib",
    shared_library = "compiled/bin/sfml-audio-3.dll",
)

cc_import(
    name = "sfml-network",
    hdrs = glob(["compiled/include/SFML/Network/**"]) + ["compiled/include/SFML/Network.hpp"],
    interface_library = "compiled/lib/sfml-network.lib",
    shared_library = "compiled/bin/sfml-network-3.dll",
)

cc_library(
    name = "sfml-all",
    includes = ["compiled/include"],
    visibility = ["//visibility:public"],
    deps = [
        ":sfml-audio",
        ":sfml-graphics",
        ":sfml-network",
        ":sfml-system",
        ":sfml-window",
    ],
)
