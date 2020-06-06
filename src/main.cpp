#include <structs.hpp>

using namespace hapnmc::fs01;

struct rando_str {};

int main(int argc, char* argv[])
{
	OstreamVar osv;

	osv.Stream(45);
	osv.Stream(45, "some text", 5.6f);
	osv.Stream();

	/*
	rando_str rs;
	osv.Stream(rs); // constraints not satisfied readable error
	*/

	return 0;
}