#pragma once

#include <iosfwd>
#include <string>

#include <fakeit/export.hpp>

namespace fakeit
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  FAKEIT_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
