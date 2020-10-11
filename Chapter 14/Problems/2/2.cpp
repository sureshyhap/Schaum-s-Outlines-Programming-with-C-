#include <iostream>
#include <vector>
#include <algorithm>

void remove_duplicates(std::vector<int>& v);

int main(int argc, char* argv[]) {
  std::vector<int> v;
  v.push_back(2);
  v.push_back(12);
  v.push_back(3);
  v.push_back(2);
  v.push_back(4);
  v.push_back(4);
  v.push_back(5);
  v.push_back(1);	
  v.push_back(2);

  std::vector<int> x, y;
  y.push_back(2);

  remove_duplicates(v);
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
  }

  return 0;
}

void remove_duplicates(std::vector<int>& v) {
  std::vector<int>::iterator it = v.begin();
  // Temporary vector w that will hold the unique integers in the vector v
  std::vector<int> w;
  // Have to check for cases where there are 0 or 1 elements in v
  if (v.size() != 0) {
    // Push the first element to w as a starting point
    w.push_back(*it++);
  }
  else {
    return;
  }
  
  for (; it != v.end(); ++it) {
    // If an element (other than the 1st) was found in w, then it is a duplicate so erase it
    if (std::find(w.begin(), w.end(), *it) != w.end()) {
      // Erase returns iterator after the deleted one so need to --here to cancel the ++ in the for loop
      it-- = v.erase(it);
    }
    else {
      // Push unique elements to w
      w.push_back(*it);
    }
  }
}
