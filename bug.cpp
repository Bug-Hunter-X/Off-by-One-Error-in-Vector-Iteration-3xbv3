std::vector<int> vec; 
// ... some code that adds elements to vec ...
for (int i = 0; i <= vec.size(); ++i) { //Error: Accessing vec[vec.size()] causes undefined behavior
  std::cout << vec[i] << " ";
}
