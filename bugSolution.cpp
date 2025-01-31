std::vector<int> myVector(10, 0); // Initialize a vector of 10 integers with value 0

for (int i = 0; i < 10; ++i) { // Corrected loop condition: i < 10
  myVector[i] = i * 2; 
}

// Or, even better, use iterators for safer access:
for (auto& element : myVector) {
  element = std::distance(myVector.begin(), &element) * 2; 
}

This corrected code iterates only up to the valid indices of the `std::vector`.  The iterator based solution further enhances safety by ensuring access is limited to the valid vector elements.