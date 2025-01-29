// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterMimir",
    products: [
        .library(name: "TreeSitterMimir", targets: ["TreeSitterMimir"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterMimir",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterMimirTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterMimir",
            ],
            path: "bindings/swift/TreeSitterMimirTests"
        )
    ],
    cLanguageStandard: .c11
)
