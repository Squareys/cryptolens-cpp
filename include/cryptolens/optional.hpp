#pragma once

#include <optional>

namespace cryptolens_io {

namespace v20190401 {

template<typename T>
using optional = std::optional<T>;

using std::make_optional;
using std::nullopt;

} // namespace v20190401

} // namespace cryptolens_io

namespace cryptolens_io {

namespace latest {

template<typename T>
using optional = ::cryptolens_io::v20190401::optional<T>;

using ::cryptolens_io::v20190401::make_optional;
using ::cryptolens_io::v20190401::nullopt;

} // namespace latest

} // namespace cryptolens_io
