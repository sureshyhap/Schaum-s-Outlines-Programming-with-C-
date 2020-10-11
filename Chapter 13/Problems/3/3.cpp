#include <iostream>

template<typename T>
class Queue {
public:
  // Bottom will be below the bottom element
  // Top will be at the top element
  Queue(int s = 100) : size(s), top(-1), bottom(-1) {data = new T[size];}
  Queue(const Queue& q) : size(q.size), top(q.top), bottom(q.bottom) {
    data = new T[q.size];
    for (int i = 0; i < size; ++i) {
      data[i] = q.data[i];
    }
  }
  ~Queue() {delete [] data;}
  Queue& operator=(const Queue& q) {
    size = q.size;
    top = q.top;
    bottom = q.bottom;
    delete [] data;
    data = new T[size];
    for (int i = 0; i < size; ++i) {
      data[i] = q.data[i];
    }
  }
  int insert(const T& element); //////////////////////////
  int delete_(T& element);
  void print_data();
protected:
private:
  T* data;
  int size;
  int top, bottom;
};

template<typename T>
int Queue<T>::insert(const T& element) {
  // top is maximum size
  if (top < size - 1) {
    data[++top] = element;
  }
  else {
    return -1;
  }
}

// T& element will store the deleted value
template<typename T>
int Queue<T>::delete_(T& element) {
  if (top == -1 || top == bottom) {
    return -1;
  }
  else if (bottom < top) {
    element = data[++bottom];
  }
}

template<typename T>
void Queue<T>::print_data() {
  if (bottom == top) {
    return;
  }
  else {
    for (int i = bottom + 1; i <= top; ++i) {
      std::cout << data[i] << " ";
    }
  }
}

int main(int argc, char* argv[]) {
  Queue<int> q(10);
  q.insert(3);
  q.insert(1);
  q.insert(2);
  int n = 0;
  q.delete_(n);
  std::cout << n << std::endl << std::endl;
  q.insert(4);
  q.print_data();
  
  
  return 0;
}
