#include "RemoveDuplicates.h"


int removeDuplicates(vector<int>& nums) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function removes duplicate integers          |
  //   |   from a sorted array in-place.                     |
  //   | - It uses two pointers to achieve this.             |
  //   |                                                     |
  //   | Return type: int                                    |
  //   | - Returns the length of the new array.              |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'writePointer' is used for storing unique values. |
  //   | - 'readPointer' is used for reading array values.   |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
   if (nums.empty()) return 0; // If the vector is empty, return 0

    int writePointer = 1; // Start from the second element for comparison

    // Iterate through nums starting from the second element
    for (int readPointer = 1; readPointer < nums.size(); readPointer++) {
        // If the current element is not equal to the previous one,
        // it's a unique element, and we should record it.
        if (nums[readPointer] != nums[readPointer - 1]) {
            nums[writePointer] = nums[readPointer];
            writePointer++; // Move the writePointer forward
        }
    }

    // The writePointer is now at the position where the next unique element would be written,
    // which is also the length of the array without duplicates.
    return writePointer;
}