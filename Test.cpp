/**
* @author Thomas Gartman
* @file Test.cpp
* @date November 4th, 2018
* @brief Test class for LinkedListOfInts
*/

#include <iostream>
#include <vector>
#include "Test.h"
Test::Test()
{

}

void Test::runTests()
{
  LinkedListOfInts list1;
  std::cout << "Test 1: isEmpty() on empty list: ";
  resultPrint(testIsEmpty(list1, true));

  LinkedListOfInts list2;
  list2.addFront(1);
  std::cout << "Test 2: isEmpty() on list of size 1: ";
  resultPrint(testIsEmpty(list2, false));

  LinkedListOfInts list3;
  list3.addFront(1);
  list3.addFront(2);
  list3.addFront(3);
  list3.addFront(4);
  list3.addFront(5);
  std::cout << "Test 3: isEmpty on list of size 5: ";
  resultPrint(testIsEmpty(list3, false));

  std::cout << std::endl;

  LinkedListOfInts list4;
  std::cout << "Test 4: addFront(1) on empty list: ";
  resultPrint(testAddFront(list4, 1));

  LinkedListOfInts list5;
  list5.addFront(1);
  std::cout << "Test 5: addFront(2) on list of size 1, using 1 addFront: ";
  resultPrint(testAddFront(list5, 2));

  LinkedListOfInts list6;
  list6.addFront(1);
  list6.addFront(2);
  list6.addFront(3);
  list6.addFront(4);
  list6.addFront(5);
  std::cout << "Test 6: addFront(6) on list of size 5: ";
  resultPrint(testAddFront(list6, 6));

  std::cout << std::endl;

  LinkedListOfInts list7;
  std::cout << "Test 7: addBack(1) on empty list: ";
  resultPrint(testAddBack(list7, 1));

  LinkedListOfInts list8;
  list8.addBack(1);
  std::cout << "Test 8: addBack(2) on list of size 1, using 1 addBack: ";
  resultPrint(testAddBack(list8, 2));

  LinkedListOfInts list9;
  list9.addBack(1);
  list9.addBack(2);
  list9.addBack(3);
  list9.addBack(4);
  list9.addBack(5);
  std::cout << "Test 9: addBack(6) on list of size 5: ";
  resultPrint(testAddBack(list9, 6));

  std::cout << std::endl;

  LinkedListOfInts list10;
  std::cout << "Test 10: size() on empty list: ";
  resultPrint(testSize(list10, 0));

  LinkedListOfInts list11;
  list11.addFront(1);
  std::cout << "Test 11: size() list of size 1, using 1 addFront call: ";
  resultPrint(testSize(list11, 1));

  LinkedListOfInts list12;
  list12.addFront(1);
  list12.addFront(2);
  list12.addFront(3);
  list12.addFront(4);
  list12.addFront(5);
  std::cout << "Test 12: size() list of size 5, using 5 addFront calls: ";
  resultPrint(testSize(list12, 5));

  LinkedListOfInts list13;
  list13.addBack(1);
  std::cout << "Test 13: size() list of size 1, using 1 addBack call: ";
  resultPrint(testSize(list13, 1));

  LinkedListOfInts list14;
  list14.addBack(1);
  list14.addBack(2);
  list14.addBack(3);
  list14.addBack(4);
  list14.addBack(5);
  std::cout << "Test 14: size() list of size 5, using 5 addBack calls: ";
  resultPrint(testSize(list14, 5));

  std::cout << std::endl;

  LinkedListOfInts list15;
  std::cout << "Test 15: search(5) on empty list: ";
  resultPrint(testSearch(list15, 5, false));

  LinkedListOfInts list16;
  list16.addFront(1);
  std::cout << "Test 16: search(1) list of size 1, list contains 1, using 1 addFront call: ";
  resultPrint(testSearch(list16, 1, true));

  LinkedListOfInts list17;
  list17.addFront(1);
  std::cout << "Test 17: search(2) list of size 1, list does not contain 2, using 5 addFront calls: ";
  resultPrint(testSearch(list17, 2, false));

  LinkedListOfInts list18;
  list18.addFront(1);
  list18.addFront(2);
  list18.addFront(3);
  list18.addFront(4);
  list18.addFront(5);
  std::cout << "Test 18: search(3) list of size 5, list contains 3, using 1 addFront call: ";
  resultPrint(testSearch(list18, 3, true));

  LinkedListOfInts list19;
  list19.addFront(1);
  list19.addFront(2);
  list19.addFront(3);
  list19.addFront(4);
  list19.addFront(5);
  std::cout << "Test 17: search(6) list of size 5, list does not contain 6, using 5 addFront calls: ";
  resultPrint(testSearch(list17, 6, false));

  LinkedListOfInts list20;
  list20.addBack(1);
  std::cout << "Test 20: search(1) list of size 1, list contains 1, using 1 addBack call: ";
  resultPrint(testSearch(list20, 1, true));

  LinkedListOfInts list21;
  list21.addBack(1);
  std::cout << "Test 21: search(2) list of size 1, list does not contain 2, using 1 addBack call: ";
  resultPrint(testSearch(list21, 2, false));

  LinkedListOfInts list22;
  list22.addBack(1);
  list22.addBack(2);
  list22.addBack(3);
  list22.addBack(4);
  list22.addBack(5);
  std::cout << "Test 22: search(3) list of size 5, list contains 3, using 5 addBack calls: ";
  resultPrint(testSearch(list22, 3, true));

  LinkedListOfInts list23;
  list23.addBack(1);
  list23.addBack(2);
  list23.addBack(3);
  list23.addBack(4);
  list23.addBack(5);
  std::cout << "Test 23: search(6) list of size 5, list does not contain 6, using 5 addBack calls: ";
  resultPrint(testSearch(list23, 6, false));

  std::cout << std::endl;

  LinkedListOfInts list24;
  std::cout << "Test 24: removeFront() on empty list: ";
  resultPrint(testRemoveFront(list24, true, 0));

  LinkedListOfInts list25;
  list25.addFront(1);
  std::cout << "Test 25: removeFront() list of size 1, using 1 addFront call: ";
  resultPrint(testRemoveFront(list25, false, 0));

  LinkedListOfInts list26;
  list26.addBack(1);
  list26.addBack(2);
  std::cout << "Test 26: removeFront() list of size 2, using 2 addFront calls: ";
  resultPrint(testRemoveFront(list26, false, 2));

  LinkedListOfInts list27;
  list27.addFront(1);
  list27.addFront(2);
  list27.addFront(3);
  list27.addFront(4);
  list27.addFront(5);
  std::cout << "Test 27: removeFront() list of size 5, using 5 addFront calls: ";
  resultPrint(testRemoveFront(list27, false, 2));

  LinkedListOfInts list28;
  list28.addBack(1);
  std::cout << "Test 28: removeFront() list of size 1, using 1 addBack call: ";
  resultPrint(testRemoveFront(list28, false, 0));

  LinkedListOfInts list29;
  list29.addBack(1);
  list29.addBack(2);
  std::cout << "Test 29: removeFront() list of size 2, using 2 addBack calls: ";
  resultPrint(testRemoveFront(list29, false, 2));

  LinkedListOfInts list30;
  list30.addBack(1);
  list30.addBack(2);
  list30.addBack(3);
  list30.addBack(4);
  list30.addBack(5);
  std::cout << "Test 30: removeFront() list of size 5, using 5 addBack calls: ";
  resultPrint(testRemoveFront(list30, false, 2));

  std::cout << std::endl;

  LinkedListOfInts list31;
  std::cout << "Test 31: removeBack() on empty list: ";
  resultPrint(testRemoveBack(list31, true, 0));

  LinkedListOfInts list32;
  list32.addFront(1);
  std::cout << "Test 32: removeBack() list of size 1, using 1 addFront call: ";
  resultPrint(testRemoveFront(list32, false, 0));

  LinkedListOfInts list33;
  list33.addFront(1);
  list33.addFront(2);
  std::cout << "Test 33: removeBack() list of size 2, using 2 addFront calls: ";
  resultPrint(testRemoveFront(list33, false, 1));

  LinkedListOfInts list34;
  list34.addFront(1);
  list34.addFront(2);
  list34.addFront(3);
  list34.addFront(4);
  list34.addFront(5);
  std::cout << "Test 34: removeBack() list of size 5, using 5 addFront calls: ";
  resultPrint(testRemoveBack(list34, false, 4));

  LinkedListOfInts list35;
  list35.addBack(1);
  std::cout << "Test 35: removeBack() list of size 1, using 1 addBack call: ";
  resultPrint(testRemoveBack(list35, false, 0));

  LinkedListOfInts list36;
  list36.addBack(1);
  list36.addBack(2);
  std::cout << "Test 36: removeBack() list of size 2, using 2 addBack calls: ";
  resultPrint(testRemoveBack(list36, false, 1));

  LinkedListOfInts list37;
  list37.addBack(1);
  list37.addBack(2);
  list37.addBack(3);
  list37.addBack(4);
  list37.addBack(5);
  std::cout << "Test 37: removeBack() list of size 5, using 5 addBack calls: ";
  resultPrint(testRemoveBack(list37, false, 4));
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
  std::vector<int> tempVector = (std::vector<int>)list.toVector();
  if(tempVector.empty())
  {
    return false;
  }
  else if(tempVector.front() == expectedValue)
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
  if(tempVector.empty())
  {
    return !expected;
  }
  else if(tempVector.front() == expectedValue)
  {
    return true;
  }
  std::cout << tempVector.front();
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
  if(tempVector.empty())
  {
    return !expected;
  }
  else if(tempVector.back() == expectedValue)
  {
    return true;
  }
  return false;
}

bool Test::testAddBack(LinkedListOfInts list, int expectedValue)
{
  list.addBack(expectedValue);
  std::vector<int> tempVector = list.toVector();
  if(tempVector.empty())
  {
    return false;
  }
  else if(tempVector.back() == expectedValue)
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
