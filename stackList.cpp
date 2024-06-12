#include <iostream>

struct Node {
  int data;
  Node* next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Stack {
  Node* top;

public:
  Stack() {
    top = NULL;
  }

  void push(int x) {
    Node* temp = new Node(x);
    temp->next = top;
    top = temp;
  }

  void pop() {
    if (top == NULL) {
      std::cout << "Stack Underflow" << std::endl;
      return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
  }

  int peek() {
    if (top == NULL) {
      std::cout << "Stack is Empty" << std::endl;
      return -1;
    }
    return top->data;
  }

  bool isEmpty() {
    return top == NULL;
  }
};

int main() {
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);

  std::cout << s.peek() << std::endl;

  s.pop();

  if (s.isEmpty()) {
    std::cout << "Stack is empty" << std::endl;
  } else {
    std::cout << "Stack is not empty" << std::endl;
  }

  return 0;
}

