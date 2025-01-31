std::vector<int> myVector(10, 0); // Initialize a vector of 10 integers with value 0

for (int i = 0; i <= 10; ++i) { // Notice the loop condition: it should be i < 10
  myVector[i] = i * 2; 
}

This code will cause a runtime error (segmentation fault or similar) because it attempts to access the element at index 10 of a vector that only has elements from index 0 to 9.  The valid indices are 0 to 9 (inclusive), so using 'i <= 10' goes out of bounds.