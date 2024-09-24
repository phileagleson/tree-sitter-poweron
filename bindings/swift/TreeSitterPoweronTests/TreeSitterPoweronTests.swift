import XCTest
import SwiftTreeSitter
import TreeSitterPoweron

final class TreeSitterPoweronTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_poweron())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Poweron grammar")
    }
}