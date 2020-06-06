#ifndef FS01_CONCEPTS_HPP
#define FS01_CONCEPTS_HPP

#include <concepts>
#include <iostream>

namespace hapnmc { namespace fs01 {

	template<typename T>
	concept CtOstreamable = requires(std::ostream& os, T a) {
	    { os << a };
  	};

}} // hapnmc::fs01

#endif // FS01_CONCEPTS_HPP