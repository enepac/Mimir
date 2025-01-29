import XCTest
import SwiftTreeSitter
import TreeSitterMimir

final class TreeSitterMimirTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mimir())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Mimir grammar")
    }
}
