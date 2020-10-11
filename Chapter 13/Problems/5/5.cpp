#include <iostream>

template<typename T>
class Vector {
public:
  Vector(int c = 100) : capacity(c), present_size(0) {data = new T[capacity];}
  Vector(T* a) : present_size(sizeof(a)), capacity(present_size) {
    data = new T[present_size];
    for (int i = 0; i < present_size; ++i) {
      data[i] = a[i];
    }
  }
  Vector(const Vector& v) : capacity(v.capacity), present_size(v.present_size) {
    data = new T[capacity];
    for (int i = 0; i < present_size; ++i) {
      data[i] = v.data[i];
    }
  }
  ~Vector() {delete [] data;}
  Vector& operator=(const Vector& v) {
    capacity = v.capacity;
    present_size = v.present_size;
    delete [] data;
    data = new T[capacity];
    for (int i = 0; i < present_size; ++i) {
      data[i] = v.data[i];
    }
  }
  T& operator[](int index);
  void change_cap(int new_cap);
  void insert(const T& element); ////////?
  // T& element will hold the deleted element
  void delete_(T& element);
  void print_vec() const;
protected:
  T* data;
  int capacity, present_size;
private:
};

template<typename T>
T& Vector<T>::operator[](int index) {
  return data[index];
}

template<typename T>
void Vector<T>::change_cap(int new_cap) {
  // Place holder for the data
  T temp[present_size];
  for (int i = 0; i < present_size; ++i) {
    temp[i] = data[i];
  }
  delete [] data;
  data = new T[new_cap];
  present_size = (new_cap > present_size ? present_size: new_cap);
  capacity = new_cap;
  for (int i = 0; i < present_size; ++i) {
    data[i] = temp[i];
  }
}

template<typename T>
void Vector<T>::insert(const T& element) {
  if (present_size < capacity) {
    data[present_size++] = element;
  }
  else {
    return;
  }
}

template<typename T>
void Vector<T>::delete_(T& element) {
  if (present_size > 0) {
    element = data[--present_size];
  }
  else {
    return;
  }
}

template<typename T>
void Vector<T>::print_vec() const {
  for (int i = 0; i < present_size; ++i) {
    std::cout << data[i] << " ";
  }
}

int main(int argc, char* argv[]) {
  /*  Vector<int> v(3);
  v.insert(34);
  v.insert(4);
  v.insert(7);
  v.print_vec();
  std::cout << std::endl;
  v.insert(10);
  v.print_vec();
  std::cout << std::endl;
  int n = 0;
  v.delete_(n);
  std::cout << n << std::endl;
  v.print_vec();
  std::cout << std::endl;
  v.change_cap(5);
  v.print_vec();
  std::cout << std::endl;
  v.change_cap(1);
  v.print_vec();
  std::cout << std::endl;
  */

  int a[] = {5, 3, 7, 3, 9, 8, 7, 9};

  Vector<int> v2(a);
  v2.print_vec();
  
  return 0;
}
