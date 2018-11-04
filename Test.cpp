/**
* @author Thomas Gartman
* @file Test.cpp
* @date November 3rd, 2018
* @brief Test class for LinkedListOfInts
*/

#include <iostream>
#include <vector>
#include "Test.h"
Test::Test()
{

}

void Test::runTests(LinkedListOfInts list)
{
  std::cout << "Test 1: isEmpty() on empty list: ";
  resultPrint(testIsEmpty(list, true));

  std::cout << "Test 2: size() on empty list: ";
  resultPrint(testSize(list, 0));

  std::cout << "Test 3: RemoveFront() on empty list: ";
  resultPrint(testRemoveFront(list, true, 0));

  std::cout << "Test 4: RemoveBack() on empty list: ";
  resultPrint(testRemoveBack(list, true, 0));

  std::cout << "Test 5: AddFront(1) on empty list: ";
  resultPrint(testAddFront(list, 1));

  std::cout << "Test 6: isEmpty() on non empty list: ";
  resultPrint(testIsEmpty(list, false));

  std::cout << "Test 7: size() list of size 1: ";
  resultPrint(testSize(list, 1));

  std::cout << "Test 8: AddFront(2) on non-empty list: ";
  resultPrint(testAddFront(list, 2));

  std::cout << "Test 9: RemoveFront() on non-empty list: ";
  resultPrint(testRemoveFront(list, false, 1));

  std::cout << "Test 10: RemoveBack() on non-empty list: ";
  resultPrint(testRemoveBack(list, false, 2));
}

bool Test::testIsEmpty(LinkedListOfInts list, bool expected)
{
  if(list.isEmpty())
  {
    return expected == true;
  }
  return expected == false;
}

bool Test::testAddFront(LinkedListOfInts list, int expectedValue)
{
  list.addFront(expectedValue);
  std::vector<int> tempVector = list.toVector();
  if(tempVector.front() == expectedValue)
  {
    return true;
  }
  return false;
}

bool Test::testSize(LinkedListOfInts list, int expectedSize)
{
  if(list.size() == expectedSize)
  {
    return true;
  }
  return false;
}

bool Test::testRemoveFront(LinkedListOfInts list, bool expected, int expectedValue)
{
  //empty list behavior
  if(!list.removeFront())
  {
    return expected;
  }
  std::vector<int> tempVector = list.toVector();
  if(tempVector.front() == expectedValue)
  {
    return true;
  }
  return false;
}

bool Test::testRemoveBack(LinkedListOfInts list, bool expected, int expectedValue)
{
  //empty list behavior
  if(!list.removeBack())
  {
    return expected;
  }
  std::vector<int> tempVector = list.toVector();
  if(tempVector.back() == expectedValue)
  {
    return true;
  }
  return false;
}

bool Test::testAddBack(LinkedListOfInts list, int expectedValue)
{
  list.addBack(expectedValue);
  std::vector<int> tempVector = list.toVector();
  if(tempVector.back() == expectedValue)
  {
    return true;
  }
  return false;  
}

bool Test::testSearch(LinkedListOfInts list, int searchNumber, bool expected)
{
  if(list.search(searchNumber) == expected)
  {
    return true;
  }
  return false;
}

void Test::resultPrint(bool result)
{
  if(result)
  {
    std::cout << m_green << "PASSED" << m_normal << std::endl;
  }
  else
  {
    std::cout << m_red << "FAILED" << m_normal << std::endl;
  }
}
