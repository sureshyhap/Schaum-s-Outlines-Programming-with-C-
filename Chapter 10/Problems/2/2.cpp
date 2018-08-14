#include <iostream>

class Stack {
public:
  Stack(int s = 10) : max_size(s), top(-1) {
    stack = new int[max_size];
  }
  ~Stack() {
    delete [] stack;
  }
  void push(int element);
  int pop();
  bool isEmpty();
  bool isFull();
  void print_stack() const;
private:
  int* stack;
  int max_size;
  int top;
};

void Stack::push(int element) {
  if(!isFull()) {
    stack[++top] = element;
  }
}

int Stack::pop() {
  if(!isEmpty()) {
    return stack[top--];
  }
}

bool Stack::isEmpty() {
  return top == -1;
}

bool Stack::isFull() {
  return top == max_size - 1;
}

void Stack::print_stack() const {
  for (int i = top; i >= 0; --i) {
    std::cout << stack[i] << std::endl;
  }
  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  Stack s;
  s.push(5);
  s.push(2);
  s.push(3);
  s.print_stack();
  s.pop();
  s.print_stack();
  
  return 0;
}
