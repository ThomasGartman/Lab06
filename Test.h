/**
* @author Thomas Gartman
* @file Test.h
* @date November 2nd, 2018
* @brief header for test class
*/

#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"

class Test
{
  public:
    /**
    * @pre None
    * @post Test Class initialized
    */
    Test();

    /**
    * @pre Linked List Exists
    * @post Test Results known
    * @return None
    */
    void runTests();

    /**
    * @pre Linked List Exists
    * @post None
    * @return None
    */
    void resultPrint(bool result);

    /**
    * @pre Linked List Exists
    * @post None
    * @return True if Test Passed, False Otherwise
    */
    bool testIsEmpty(LinkedListOfInts list, bool expected);

    /**
    * @pre Linked List Exists
    * @post None
    * @return True if Test Passed, False Otherwise
    */
    bool testAddFront(LinkedListOfInts list, int expectedValue);

    /**
    * @pre Linked List Exists
    * @post None
    * @return True if Test Passed, False Otherwise
    */
    bool testSize(LinkedListOfInts list, int expectedSize);

    /**
    * @pre Linked List Exists
    * @post None
    * @return True if Test Passed, False Otherwise
    */
    bool testRemoveFront(LinkedListOfInts list, bool expected, int expectedValue);
  
    /**
    * @pre Linked List Exists
    * @post None
    * @return True if Test Passed, False Otherwise
    */
    bool testRemoveBack(LinkedListOfInts list, bool expected, int expectedValue);

    /**
    * @pre Linked List Exists
    * @post None
    * @return True if Test Passed, False Otherwise
    */
    bool testAddBack(LinkedListOfInts list, int expectedValue);

    /**
    * @pre Linked List Exists
    * @post None
    * @return True if Test Passed, False Otherwise
    */
    bool testSearch(LinkedListOfInts list, int searchNumber, bool expected);

  private:
    //Credit for this approach goes to http://www.cplusplus.com/forum/beginner/1640/ user jsmith
    //m_green and m_red are my definitions based upon m_normal from above
    char m_green[8] = {0x1b, '[', '1', ';', '3', '2', 'm',0};
    char m_red[8] = {0x1b, '[', '1', ';', '3', '1', 'm',0};
    char m_normal[8] = {0x1b, '[', '0', ';', '3', '9', 'm', 0};
};

#endif
