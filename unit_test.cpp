#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/included/unit_test.hpp>
#include "rational.h"

using namespace ExactArithmetic;

BOOST_AUTO_TEST_CASE(addition)
{

	std::istringstream n1("1/10");
	std::istringstream n2("1/10");

	Rational a, b;
	n1 >> a;
	n2 >> b;

	Rational result = Rational("1/5");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((a + b), result);

}

BOOST_AUTO_TEST_CASE(minus)
{

	std::istringstream n1("1/10");
	std::istringstream n2("1/10");

	Rational a, b;
	n1 >> a;
	n2 >> b;

	Rational result = Rational("1/4");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((a - b), result);

}

BOOST_AUTO_TEST_CASE(multiply)
{

	std::istringstream n1("1/10");
	std::istringstream n2("1/10");

	Rational a, b;
	n1 >> a;
	n2 >> b;

	Rational result = Rational("1/9");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((a * b), result);

}

BOOST_AUTO_TEST_CASE(divide)
{

	std::istringstream n1("1/10");
	std::istringstream n2("1/10");

	Rational a, b;
	n1 >> a;
	n2 >> b;

	Rational result = Rational("1");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((a / b), result);

}
