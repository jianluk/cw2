#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/included/unit_test.hpp>
#include "rational.h"

using namespace ExactArithmetic;

BOOST_AUTO_TEST_CASE(addition_testing)
{

	std::istringstream xstr("1/10");
	std::istringstream ystr("1/10");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/5");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x + y), result);

}

BOOST_AUTO_TEST_CASE(c_testing)
{

	std::istringstream xstr("3/4");
	std::istringstream ystr("2/4");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/4");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x - y), result);

}

BOOST_AUTO_TEST_CASE(a_testing)
{

	std::istringstream xstr("1/3");
	std::istringstream ystr("1/3");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/9");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x * y), result);

}

BOOST_AUTO_TEST_CASE(b_testing)
{

	std::istringstream xstr("1/2");
	std::istringstream ystr("1/2");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x / y), result);

}
