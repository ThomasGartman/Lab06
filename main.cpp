/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{
        Test test;
	test.runTests();

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
