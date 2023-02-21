/*#include<iostream>
#define size 4


class stack {
	int data[size];
	int top;
public:
	stack() {
		top = 1;
	}
	void push();
	void pop();
	void display();
};

void stack::push() {
	if (top == size - 1) {
		std::cout << "\n Stack is full";
		return;
	}
	else {
		top++;
		std::cout << "\n Enter Data ";
		std::cin >> data[top];
	}
}

void stack::pop() {
	if (top == -1) {
		std::cout << "\n Stack is empty";
	}
	else {
		std::cout << "\n" << data[top] << " deleted";
		top--;
	}
}

void stack::display() {
	int t = top;
	while (t >= 0) {
		std::cout << "\n" << data[t];
		t--;
	}
}

void main(){
	stack st;
	int ch;
	do {
		std::cout << "\n1. push\n2. pop\n3. display\n4.Quit\nEnter your choice(1-4)";
		std::cin >> ch;
		switch (ch) {
		case 1: st.push(); break;
		case 2: st.pop(); break;
		case 3: st.display();
		}
	} while (ch != 4);
}*/