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
  std::cout << "Test 2: size() on empty list: ";
  resultPrint(testSize(list2, 0));

  LinkedListOfInts list3;
  std::cout << "Test 3: RemoveFront() on empty list: ";
  resultPrint(testRemoveFront(list3, true, 0));

  LinkedListOfInts list4;
  std::cout << "Test 4: RemoveBack() on empty list: ";
  resultPrint(testRemoveBack(list4, true, 0));

  LinkedListOfInts list5;
  std::cout << "Test 5: Search(5) on empty list: ";
  resultPrint(testSearch(list5, 5, false));

  LinkedListOfInts list6;
  std::cout << "Test 6: AddFront(1) on empty list: ";
  resultPrint(testAddFront(list6, 1));

  LinkedListOfInts list7;
  list7.addFront(1);
  list7.addFront(2);
  list7.addFront(3);
  list7.addFront(4);
  list7.addFront(5);
  std::cout << "Test 7: AddFront(6) on list of size 5: ";
  resultPrint(testAddFront(list7, 6));
  
  LinkedListOfInts list8;
  std::cout << "Test 8: AddBack(1) on empty list: ";
  resultPrint(testAddBack(list8, 1));

  LinkedListOfInts list9;
  list9.addBack(1);
  list9.addBack(2);
  list9.addBack(3);
  list9.addBack(4);
  list9.addBack(5);
  std::cout << "Test 9: AddBack(6) on list of size 5: ";
  resultPrint(testAddBack(list9, 6));

  LinkedListOfInts list10;
  list10.addFront(1);
  std::cout << "Test 10: isEmpty() on list of size 1: ";
  resultPrint(testIsEmpty(list10, false));

  LinkedListOfInts list11;
  list11.addFront(1);
  list11.addFront(2);
  list11.addFront(3);
  list11.addFront(4);
  list11.addFront(5);
  std::cout << "Test 11: isEmpty on list of size 5: ";
  resultPrint(testIsEmpty(list11, false));

  LinkedListOfInts list12;
  list12.addFront(1);
  std::cout << "Test 12: size() list of size 1, using 1 addFront call: ";
  resultPrint(testSize(list12, 1));

  LinkedListOfInts list13;
  list13.addFront(1);
  list13.addFront(2);
  list13.addFront(3);
  list13.addFront(4);
  list13.addFront(5);
  std::cout << "Test 13: size() list of size 5, using 5 addFront calls: ";
  resultPrint(testSize(list13, 5));

  LinkedListOfInts list14;
  list14.addBack(1);
  std::cout << "Test 14: size() list of size 1, using 1 addBack call: ";
  resultPrint(testSize(list14, 1));

  LinkedListOfInts list15;
  list15.addBack(1);
  list15.addBack(2);
  list15.addBack(3);
  list15.addBack(4);
  list15.addBack(5);
  std::cout << "Test 15: size() list of size 5, using 5 addBack calls: ";
  resultPrint(testSize(list15, 5));

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

  LinkedListOfInts list24;
  list24.addFront(1);
  std::cout << "Test 24: removeFront() list of size 1, using 1 addFront call: ";
  resultPrint(testRemoveFront(list18, true, 0));

  LinkedListOfInts list25;
  list25.addFront(1);
  list25.addFront(2);
  list25.addFront(3);
  list25.addFront(4);
  list25.addFront(5);
  std::cout << "Test 25: removeFront() list of size 5, using 5 addFront calls: ";
  resultPrint(testRemoveFront(list25, true, 2));

  LinkedListOfInts list26;
  list26.addBack(1);
  std::cout << "Test 26: removeFront() list of size 1, using 1 addBack call: ";
  resultPrint(testRemoveFront(list26, true, 0));

  LinkedListOfInts list27;
  list27.addBack(1);
  list27.addBack(2);
  list27.addBack(3);
  list27.addBack(4);
  list27.addBack(5);
  std::cout << "Test 27: removeFront() list of size 5, using 5 addBack calls: ";
  resultPrint(testRemoveFront(list27, true, 2));

  LinkedListOfInts list28;
  list28.addFront(1);
  std::cout << "Test 28: removeBack() list of size 1, using 1 addFront call: ";
  resultPrint(testRemoveFront(list28, true, 0));

  LinkedListOfInts list29;
  list29.addFront(1);
  list29.addFront(2);
  list29.addFront(3);
  list29.addFront(4);
  list29.addFront(5);
  std::cout << "Test 29: removeBack() list of size 5, using 5 addFront calls: ";
  resultPrint(testRemoveBack(list29, true, 4));

  LinkedListOfInts list30;
  list30.addBack(1);
  std::cout << "Test 30: removeBack() list of size 1, using 1 addBack call: ";
  resultPrint(testRemoveBack(list30, true, 0));

  LinkedListOfInts list31;
  list31.addBack(1);
  list31.addBack(2);
  list31.addBack(3);
  list31.addBack(4);
  list31.addBack(5);
  std::cout << "Test 31: removeBack() list of size 5, using 5 addBack calls: ";
  resultPrint(testRemoveBack(list31, true, 4));
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
