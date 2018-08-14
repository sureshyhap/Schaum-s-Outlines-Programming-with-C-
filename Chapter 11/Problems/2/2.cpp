#include <iostream>

class Vector {
  friend bool operator==(const Vector& v1, const Vector& v2);
  friend std::istream& operator>>(std::istream& is, Vector& v);
  // Not sure why it's not letting me pass a const Vector&
  friend std::ostream& operator<<(std::ostream& os, Vector& v);
public:
  
  Vector(int l = 0);
  Vector(const Vector& v);
  ~Vector();
  Vector& operator=(const Vector& v);

  double& operator[](int index);
  
private:
  double* data;
  int length;
  // Assumes maximum number of inputs is 100
  static const int MAX_SIZE = 100;
};

bool operator==(const Vector& v1, const Vector& v2) {
  if (v1.length != v2.length) {
    return false;
  }
  int length = v1.length;
  if (v1.data != NULL && v2.data != NULL) {
    for (int i = 0; i < length; ++i) {
      if (v1.data[i] != v2.data[i]) {
	return false;
      }
    }
    return true;
  }
  else {
    return false;
  }
}

std::istream& operator>>(std::istream& is, Vector& v) {
  double num = 0;
  int length_temp = 0;
  // temp will hold the inputted values
  double* temp = new double[Vector::MAX_SIZE];
  for (int i = 0; is >> num; ++i) {
    ++length_temp;
    temp[i] = num; 
  }
  if (v.data == NULL) {
    v.length = length_temp;
    v.data = new double[v.length];
    for (int i = 0; i < v.length; ++i) {
      (v.data)[i] = temp[i];
    }
  }
  else {
    // This v.length is the original since the prior
    // change is a part of the if block. Also temp2
    // here will hold v's original data
    double* temp2 = new double[v.length];
    for (int i = 0; i < v.length; ++i) {
      temp2[i] = v.data[i];
    }
    delete [] v.data;
    int length_temp2 = v.length;
    v.length += length_temp;
    v.data = new double[v.length];
    // Restore the original data
    for (int i = 0; i < length_temp2; ++i) {
      v.data[i] = temp2[i];
    }
    // Add on the inputted data
    for (int i = length_temp2; i < length_temp2 + length_temp; ++i) {
      v.data[i] = temp[i - length_temp2];
    }
    delete [] temp2;
  }
  delete [] temp;
  
  return is;
}

std::ostream& operator<<(std::ostream& os, Vector& v) {
  if (v.data == NULL) {
    return os;
  }
  for (int i = 0; i < v.length; ++i) {
    os << v[i] << " ";
  }
  return os;
}

Vector::Vector(int l) {
  length = l;
  if (length >= 0) {
    data = new double[length];
    for (int i = 0; i < length; ++i) {
      data[i] = 0;
    }
  }
  else if (length == 0){
    data = NULL;
  }
  else {
    // Dealing with negative lengths by negating them
    length *= -1;
    data = new double[length];
    for (int i = 0; i < length; ++i) {
      data[i] = 0;
    }
  }
}

Vector::Vector(const Vector& v) : length(v.length) {
  if (length >= 0) {
    data = new double[length];
    for (int i = 0; i < length; ++i) {
      data[i] = v.data[i]; // Should be using overloaded subscript operator
    }
  }
  else if (length == 0){
    data = NULL;
  }
  else {
    // Dealing with negative lengths by negating them
    length *= -1;
    data = new double[length];
    for (int i = 0; i < length; ++i) {
      data[i] = v.data[i];  // Should be using overloaded subscript operator
    }
  }
}

Vector::~Vector() {
  delete [] data;
}
///////////////////////////////////////////// Not working properly
double& Vector::operator[](int index) {
  // Assumes length is nonnegative
  if (data != NULL && index < length) {
    return data[index];
  }
}

Vector& Vector::operator=(const Vector& v) {
  length = v.length;
  // Only delete if it has been "newed"
  if (data != NULL) {
    delete [] data;
  }
  // Copying over the data
  data = new double[length];
  for (int i = 0; i < length; ++i) {
    data[i] = v.data[i];
  }
  // For chaining assignments
  return *this;
}

int main(int argc, char* argv[]) {
  Vector v1;
  Vector v2(2);
  Vector v3(10);
  v1 = v3;

  std::cin >> v1;
  
  std::cout << v1 << std::endl;
    
  return 0;
}
