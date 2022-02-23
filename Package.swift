// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "peertalk",
    platforms: [.iOS(.v14), .macOS(.v11)],
    products: [
        .library(
            name: "peertalk",
            targets: ["peertalk"]),
    ],
    targets: [
        .target(
            name: "peertalk",
            path: "peertalk",
            exclude: ["Info.plist"],
            publicHeadersPath: "."
        ),
    ],
    swiftLanguageVersions: [.v5]
)
