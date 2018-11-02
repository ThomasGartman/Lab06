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
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

  Test test;
	test.runTests(testableList);

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
