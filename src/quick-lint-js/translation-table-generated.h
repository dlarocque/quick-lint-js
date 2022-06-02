// Code generated by tools/compile-translations.go. DO NOT EDIT.
// source: po/*.po

// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#ifndef QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H
#define QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H

#include <cstddef>
#include <cstdint>
#include <iterator>
#include <quick-lint-js/assert.h>
#include <quick-lint-js/consteval.h>
#include <quick-lint-js/hash-fnv.h>
#include <quick-lint-js/translation-table.h>
#include <string_view>

namespace quick_lint_js {
using namespace std::literals::string_view_literals;

constexpr std::uint32_t translation_table_locale_count = 5;
constexpr std::uint16_t translation_table_mapping_table_size = 278;
constexpr std::size_t translation_table_string_table_size = 60218;
constexpr std::size_t translation_table_locale_table_size = 37;

QLJS_CONSTEVAL std::uint16_t translation_table_const_hash_table_look_up(
    std::string_view untranslated) {
  struct const_hash_entry {
    std::uint16_t mapping_table_index;
    const char* untranslated;
  };

  // clang-format off
  constexpr const_hash_entry const_hash_table[] = {
          {0, ""},
          {263, "unopened block comment"},
          {198, "missing semicolon after field"},
          {0, ""},
          {146, "legacy octal literal may not be BigInt"},
          {108, "expected parameter for arrow function, but got a literal instead"},
          {40, "TypeScript interfaces cannot be named 'await' in async function"},
          {102, "expected 'from' before module specifier"},
          {167, "missing body for function"},
          {0, ""},
          {0, ""},
          {39, "TypeScript interface properties cannot be private"},
          {0, ""},
          {272, "while loop is missing '{1}' around condition"},
          {86, "commas are not allowed between class methods"},
          {255, "unexpected statement before first switch case, expected 'case' or 'default'"},
          {147, "legacy octal literals may not contain underscores"},
          {129, "here"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {189, "missing name or parentheses for function"},
          {139, "invalid UTF-8 sequence"},
          {50, "a class statement is not allowed as the body of {1:singular}"},
          {244, "unexpected 'default' outside switch statement"},
          {214, "opening '<{1}>' tag here"},
          {269, "variable declared here"},
          {265, "use of undeclared type: {0}"},
          {259, "unicode byte order mark (BOM) cannot appear before #! at beginning of script"},
          {0, ""},
          {0, ""},
          {154, "missing ':' in conditional expression"},
          {258, "unexpected token in variable declaration; expected variable name"},
          {72, "cannot declare variable named keyword '{0}'"},
          {23, "'{0}' found here"},
          {0, ""},
          {0, ""},
          {0, ""},
          {158, "missing 'while (condition)' for do-while statement"},
          {271, "what is this '{1}' nonsense?"},
          {0, ""},
          {0, ""},
          {201, "missing semicolon between condition and update parts of for loop"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {168, "missing body for try statement"},
          {14, "'await' is only allowed in async functions"},
          {257, "unexpected token in export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {0, ""},
          {0, ""},
          {37, "TypeScript interface methods cannot contain a body"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {57, "arrow is here"},
          {83, "code point in Unicode escape sequence must not be greater than U+10FFFF"},
          {45, "TypeScript's 'readonly' feature is not allowed in JavaScript code"},
          {152, "missing ',' between variable declarations"},
          {191, "missing operator between expression and arrow function"},
          {175, "missing condition for if statement"},
          {0, ""},
          {0, ""},
          {0, ""},
          {32, "React/JSX is not yet implemented"},
          {46, "a 'do-while' loop"},
          {187, "missing name of exported class"},
          {253, "unexpected identifier in expression; missing operator before"},
          {203, "missing value for object property"},
          {145, "label named 'await' not allowed in async function"},
          {150, "methods should not use the 'function' keyword"},
          {0, ""},
          {95, "escaping '-' is not allowed in tag names; write '-' instead"},
          {163, "missing body for catch clause"},
          {44, "TypeScript's 'interface' feature is not allowed in JavaScript code"},
          {0, ""},
          {0, ""},
          {239, "unexpected '#'"},
          {220, "return statement returns nothing (undefined)"},
          {0, ""},
          {2, "\"global-groups\" must be a boolean or an array"},
          {188, "missing name of exported function"},
          {0, ""},
          {17, "'for' loop"},
          {54, "an 'if' statement"},
          {261, "unmatched indexing bracket"},
          {0, ""},
          {20, "'readonly static' is not allowed; write 'static readonly' instead"},
          {75, "cannot import 'let'"},
          {0, ""},
          {223, "stray comma in function parameter"},
          {0, ""},
          {36, "TypeScript interface methods cannot be marked as a generator"},
          {247, "unexpected characters in binary literal"},
          {27, "BigInt literal contains decimal point"},
          {0, ""},
          {182, "missing header and body for 'for' loop"},
          {0, ""},
          {208, "number literal contains consecutive underscores"},
          {110, "expected variable name for 'catch'"},
          {47, "a 'for' loop"},
          {231, "unclosed class; expected '}' by end of file"},
          {0, ""},
          {70, "cannot declare 'yield' inside generator function"},
          {222, "something happened"},
          {0, ""},
          {0, ""},
          {117, "for loop needs an iterable, or condition and update clauses"},
          {52, "a lexical declaration is not allowed as the body of {1:singular}"},
          {0, ""},
          {0, ""},
          {216, "redeclaration of global variable"},
          {149, "methods cannot be readonly"},
          {185, "missing name in function statement"},
          {0, ""},
          {153, "missing '...' in JSX attribute spread"},
          {0, ""},
          {13, "'await' cannot be followed by an arrow function; use 'async' instead"},
          {135, "index signature must be a field, not a method"},
          {31, "JSON syntax error"},
          {125, "function starts here"},
          {51, "a function statement is not allowed as the body of {1:singular}"},
          {130, "hex number literal has no digits"},
          {219, "remove '{0}' to update an existing variable"},
          {205, "misspelled React attribute; write '{1}' instead"},
          {63, "assignment to undeclared variable"},
          {142, "invalid hex escape sequence: {0}"},
          {128, "generator function '*' belongs before function name"},
          {232, "unclosed code block; expected '}' by end of file"},
          {0, ""},
          {273, "while loop needs parentheses around condition"},
          {0, ""},
          {0, ""},
          {164, "missing body for class"},
          {55, "another invalid string, do not use outside benchmark"},
          {173, "missing comma between object literal entries"},
          {0, ""},
          {73, "cannot export variable named 'let'"},
          {0, ""},
          {194, "missing parentheses around operand of '{0}'"},
          {0, ""},
          {0, ""},
          {172, "missing catch variable name between parentheses"},
          {88, "const variable declared here"},
          {66, "break can only be used inside of a loop or switch"},
          {0, ""},
          {0, ""},
          {0, ""},
          {1, "\"global-groups\" entries must be strings"},
          {84, "code point out of range"},
          {49, "a 'with' statement"},
          {77, "cannot reference private variables without object; use 'this.'"},
          {233, "unclosed identifier escape sequence"},
          {89, "continue can only be used inside of a loop"},
          {134, "incomplete export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {3, "\"globals\" descriptor \"shadowable\" property must be a boolean"},
          {249, "unexpected characters in number literal"},
          {21, "'while' loop"},
          {228, "this {1} looks fishy"},
          {0, ""},
          {193, "missing parentheses around left-hand side of '**'"},
          {240, "unexpected '@'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {7, "'**' operator cannot be used after unary '{1}' without parentheses"},
          {0, ""},
          {137, "indexing requires an expression"},
          {76, "cannot import variable named keyword '{0}'"},
          {22, "'with' statement"},
          {0, ""},
          {178, "missing end of array; expected ']'"},
          {100, "expected 'as' between '{1}' and '{2}'"},
          {43, "TypeScript's 'enum' feature is not yet implemented by quick-lint-js"},
          {0, ""},
          {274, "with statement is missing '{1}' around expression"},
          {275, "with statement needs parentheses around expression"},
          {0, ""},
          {190, "missing operand for operator"},
          {0, ""},
          {0, ""},
          {90, "depth limit exceeded"},
          {0, ""},
          {276, "{0} with no bindings"},
          {92, "do-while loop needs parentheses around condition"},
          {94, "escaped character is not allowed in identifiers"},
          {25, "'{0}' operator cannot be used before '**' without parentheses"},
          {64, "attribute has wrong capitalization; write '{1}' instead"},
          {107, "expected hexadecimal digits in Unicode escape sequence"},
          {213, "octal number literal has no digits"},
          {0, ""},
          {238, "unclosed template"},
          {195, "missing parentheses around self-invoked function"},
          {192, "missing parameters for arrow function"},
          {160, "missing body for 'for' loop"},
          {169, "missing body for while loop"},
          {0, ""},
          {132, "if statement needs parentheses around condition"},
          {155, "missing '<>' and '</>' to enclose multiple children"},
          {121, "free {1} and {0} {1} {2}"},
          {0, ""},
          {42, "TypeScript type annotations are not allowed in JavaScript code"},
          {141, "invalid function parameter"},
          {26, "'}' is not allowed directly in JSX text; write {{'}'} instead"},
          {144, "keywords cannot contain escape sequences"},
          {197, "missing property name between '.' and '.'"},
          {0, ""},
          {234, "unclosed interface; expected '}' by end of file"},
          {0, ""},
          {0, ""},
          {0, ""},
          {236, "unclosed regexp literal"},
          {67, "cannot access private identifier outside class"},
          {140, "invalid expression left of assignment"},
          {103, "expected '{{'"},
          {148, "let statement cannot declare variables named 'let'"},
          {35, "TypeScript interface methods cannot be marked 'async'"},
          {230, "unclosed block comment"},
          {96, "event attributes must be camelCase: '{1}'"},
          {11, "'?' creates a conditional expression"},
          {252, "unexpected expression; missing key for object entry"},
          {174, "missing comparison; '{1}' does not extend to the right side of '{0}'"},
          {127, "generator function '*' belongs after keyword function"},
          {97, "existing variable declared here"},
          {177, "missing condition for while statement"},
          {221, "see here"},
          {29, "C-style for loop is missing its third component"},
          {204, "missing variable name"},
          {250, "unexpected characters in octal literal"},
          {126, "functions/methods should not have '=>'"},
          {266, "use of undeclared variable: {0}"},
          {79, "character is not allowed in identifiers"},
          {106, "expected expression before semicolon"},
          {0, ""},
          {111, "expected variable name for 'import'-'as'"},
          {245, "unexpected 'finally' without 'try'"},
          {217, "redeclaration of variable: {0}"},
          {112, "expected {1:headlinese}"},
          {181, "missing function parameter list"},
          {237, "unclosed string literal"},
          {267, "variable already declared here"},
          {38, "TypeScript interface properties cannot be 'static'"},
          {10, "'>' is not allowed directly in JSX text; write {{'>'} or &gt; instead"},
          {268, "variable assigned before its declaration"},
          {0, ""},
          {0, ""},
          {34, "TypeScript interface fields cannot be initalized"},
          {74, "cannot export variable named keyword '{0}'"},
          {0, ""},
          {15, "'do-while' loop"},
          {16, "'else' has no corresponding 'if'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {68, "cannot assign to loop variable in for of/in loop"},
          {80, "children end here"},
          {119, "for-of loop expression cannot have semicolons"},
          {0, ""},
          {19, "'in' disallowed in C-style for loop initializer"},
          {33, "RegExp literal flags cannot contain Unicode escapes"},
          {0, ""},
          {0, ""},
          {180, "missing for loop header"},
          {133, "imported variable declared here"},
          {156, "missing '=' after variable"},
          {116, "extra ',' is not allowed between function call arguments"},
          {0, ""},
          {226, "switch statement needs parentheses around condition"},
          {0, ""},
          {0, ""},
          {218, "redundant delete statement on variable"},
          {243, "unexpected 'catch' without 'try'"},
          {0, ""},
          {0, ""},
          {248, "unexpected characters in hex literal"},
          {0, ""},
          {101, "expected 'from \"name_of_module.mjs\"'"},
          {157, "missing 'if' after 'else'"},
          {202, "missing semicolon between init and condition parts of for loop"},
          {58, "assigning to 'async' in a for-of loop requires parentheses"},
          {115, "exporting requires '{{' and '}'"},
          {229, "try statement starts here"},
          {118, "for-in loop expression cannot have semicolons"},
          {93, "do-while statement starts here"},
          {162, "missing body for 'switch' statement"},
          {212, "octal literal may not have exponent"},
          {170, "missing body for {1:headlinese}"},
          {0, ""},
          {211, "octal literal may not have decimal"},
          {0, ""},
          {270, "variable used before declaration: {0}"},
          {0, ""},
          {206, "new variable shadows existing variable"},
          {0, ""},
          {104, "expected expression after 'case'"},
          {224, "stray comma in let statement"},
          {254, "unexpected literal in parameter list; expected parameter name"},
          {0, ""},
          {18, "'if' statement"},
          {131, "if statement is missing '{1}' around condition"},
          {98, "expected ')' to close function call"},
          {124, "function declared here"},
          {165, "missing body for do-while loop"},
          {246, "unexpected '{0}'"},
          {0, ""},
          {166, "missing body for finally clause"},
          {199, "missing semicolon after index signature"},
          {0, ""},
          {28, "BigInt literal contains exponent"},
          {82, "classes cannot be named 'let'"},
          {0, ""},
          {114, "exporting requires 'default'"},
          {241, "unexpected '\\' in identifier"},
          {60, "assignment to const variable"},
          {138, "integer cannot be represented and will be rounded to '{1}'"},
          {85, "commas are not allowed after spread parameter"},
          {209, "number literal contains trailing underscore(s)"},
          {0, ""},
          {99, "expected ',' between object literal entries"},
          {186, "missing name of class"},
          {0, ""},
          {0, ""},
          {0, ""},
          {215, "private properties are not allowed in object literals"},
          {65, "binary number literal has no digits"},
          {227, "this {0} looks fishy"},
          {6, "\"globals\" must be an object"},
          {0, ""},
          {207, "newline is not allowed between 'async' and arrow function parameter list"},
          {0, ""},
          {9, "'=' changes variables; to compare, use '===' instead"},
          {71, "cannot declare and export variable with 'export default'"},
          {251, "unexpected control character"},
          {0, ""},
          {0, ""},
          {0, ""},
          {81, "classes cannot be named 'await' in async function"},
          {113, "expected {1:singular}"},
          {61, "assignment to const variable before its declaration"},
          {0, ""},
          {0, ""},
          {24, "'{0}' is not allowed for strings; use {1} instead"},
          {176, "missing condition for switch statement"},
          {159, "missing arrow operator for arrow function"},
          {161, "missing body for 'if' statement"},
          {277, "~~~ invalid string, do not use outside benchmark ~~~"},
          {179, "missing expression between parentheses"},
          {122, "function call started here"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {242, "unexpected 'case' outside switch statement"},
          {184, "missing name for class method"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {48, "a 'while' loop"},
          {4, "\"globals\" descriptor \"writable\" property must be a boolean"},
          {0, ""},
          {0, ""},
          {225, "switch statement is missing '{1}' around condition"},
          {260, "unmatched '}'"},
          {0, ""},
          {0, ""},
          {120, "forwarding exports are only allowed in export-from"},
          {171, "missing catch or finally clause for try statement"},
          {0, ""},
          {69, "cannot declare 'await' inside async function"},
          {123, "function called before declaration in block scope: {0}"},
          {0, ""},
          {136, "index signatures require a value type"},
          {143, "invalid lone literal in object literal"},
          {59, "assignment to const global variable"},
          {5, "\"globals\" descriptor must be a boolean or an object"},
          {62, "assignment to imported variable"},
          {0, ""},
          {41, "TypeScript optional properties are not allowed in JavaScript code"},
          {109, "expected parameter for arrow function, but got an expression instead"},
          {200, "missing semicolon after statement"},
          {264, "use 'while' instead to loop until a condition is false"},
          {256, "unexpected token"},
          {0, ""},
          {0, ""},
          {262, "unmatched parenthesis"},
          {151, "mismatched JSX tags; expected '</{1}>'"},
          {0, ""},
          {0, ""},
          {8, "'.' operator needs a key name; use + to concatenate strings; use [] to access with a dynamic key"},
          {78, "cannot update variable with '{0}' while declaring it"},
          {0, ""},
          {0, ""},
          {87, "const fields within classes are only allowed in TypeScript, not JavaScript"},
          {56, "array started here"},
          {0, ""},
          {91, "do-while loop is missing '{1}' around condition"},
          {210, "object literal started here"},
          {0, ""},
          {105, "expected expression before newline"},
          {0, ""},
          {12, "'async static' is not allowed; write 'static async' instead"},
          {53, "a {{0} b }} c"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {235, "unclosed object literal; expected '}'"},
          {183, "missing initializer in const declaration"},
          {196, "missing property name after '.' operator"},
          {30, "C-style for loops have only three semicolon-separated components"},
          {0, ""},
          {0, ""},
  };
  // clang-format on

  std::uint64_t hash = hash_fnv_1a_64(untranslated, 14695981039346663495ULL);
  std::uint64_t table_size = 416;
  for (std::uint64_t attempt = 0; attempt <= 4; ++attempt) {
    const const_hash_entry& hash_entry =
        const_hash_table[(hash + attempt * attempt) % table_size];
    if (hash_entry.mapping_table_index == 0) {
      break;
    }
    if (hash_entry.untranslated == untranslated) {
      return hash_entry.mapping_table_index;
    }
  }

  // If you see an error with the following line, translation-table-generated.h
  // is out of date. Run tools/update-translator-sources to rebuild this file.
  QLJS_CONSTEXPR_ASSERT(false);

  return 0;
}
}

#endif

// quick-lint-js finds bugs in JavaScript programs.
// Copyright (C) 2020  Matthew "strager" Glazar
//
// This file is part of quick-lint-js.
//
// quick-lint-js is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// quick-lint-js is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with quick-lint-js.  If not, see <https://www.gnu.org/licenses/>.
