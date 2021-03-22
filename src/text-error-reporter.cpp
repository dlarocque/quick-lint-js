// Copyright (C) 2020  Matthew Glazar
// See end of file for extended copyright information.

#include <ostream>
#include <quick-lint-js/char8.h>
#include <quick-lint-js/cli-location.h>
#include <quick-lint-js/location.h>
#include <quick-lint-js/optional.h>
#include <quick-lint-js/padded-string.h>
#include <quick-lint-js/text-error-reporter.h>
#include <quick-lint-js/token.h>

namespace quick_lint_js {
text_error_reporter::text_error_reporter(std::ostream &output)
    : output_(output) {}

void text_error_reporter::set_source(padded_string_view input,
                                     const char *file_path) {
  this->locator_.emplace(input);
  this->file_path_ = file_path;
}

#define QLJS_ERROR_TYPE(name, code, struct_body, format_call) \
  void text_error_reporter::report(name e) {                  \
    format_error(e, this->format(code));                      \
  }
QLJS_X_ERROR_TYPES
#undef QLJS_ERROR_TYPE

text_error_formatter text_error_reporter::format(const char *code) {
  QLJS_ASSERT(this->file_path_);
  QLJS_ASSERT(this->locator_.has_value());
  return text_error_formatter(/*output=*/this->output_,
                              /*file_path=*/this->file_path_,
                              /*locator=*/*this->locator_,
                              /*code=*/code);
}

text_error_formatter::text_error_formatter(std::ostream &output,
                                           const char *file_path,
                                           cli_locator &locator,
                                           const char *code)
    : output_(output), file_path_(file_path), locator_(locator), code_(code) {}

void text_error_formatter::write_before_message(
    severity sev, const source_code_span &origin) {
  cli_source_range r = this->locator_.range(origin);
  cli_source_position p = r.begin();
  this->output_ << this->file_path_ << ":" << p.line_number << ":"
                << p.column_number << ": ";
  switch (sev) {
  case severity::error:
    this->output_ << "error: ";
    break;
  case severity::note:
    this->output_ << "note: ";
    break;
  case severity::warning:
    this->output_ << "warning: ";
    break;
  }
}

void text_error_formatter::write_message_part(severity, string8_view message) {
  this->output_ << out_string8(message);
}

void text_error_formatter::write_after_message(severity,
                                               const source_code_span &) {
  this->output_ << " [" << this->code_ << "]\n";
}
}

// quick-lint-js finds bugs in JavaScript programs.
// Copyright (C) 2020  Matthew Glazar
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
