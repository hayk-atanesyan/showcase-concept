#ifndef FS01_STRUCTS_HPP
#define FS01_STRUCTS_HPP

#include <concepts.hpp>
#include <iostream>

namespace hapnmc { namespace fs01 {

	class OstreamVar
	{
	private:
		template<CtOstreamable T>
		void doStream(T t)
		{
			std::cout << t << " ";
		}
	public:
		OstreamVar() noexcept {}

		void Stream() 
		{
			std::cout << std::endl;
		}

		template<CtOstreamable T, CtOstreamable... Args>
		void Stream(T first, Args... args)
		{
			doStream(first);
			Stream(args...);
		}

	};

}} // hapnmc::fs01

#endif // FS01_STRUCTS_HPP