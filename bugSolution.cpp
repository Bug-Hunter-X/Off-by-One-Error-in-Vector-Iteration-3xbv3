std::vector<int> vec; 
// ... some code that adds elements to vec ...
for (int i = 0; i < vec.size(); ++i) { //Corrected loop condition
  std::cout << vec[i] << " ";
}
//Alternatively, use iterators for safer iteration:
for (int x : vec) {
    std::cout << x << " ";
}
