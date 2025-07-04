// Create a class called LIST with two pure virtual functions store() and retrieve(). To store a value call store and to retrieve call retrieve function. Derive two classes stack and queue from it and override store and retrieve.

#include <iostream>
using namespace std;

class List {
public:
    virtual void store(int value) = 0;
    virtual int retrieve() = 0;
};

class Stack : public List {
    int arr[100],top;       
public:
    Stack() : top(-1) {}
    void store(int value) override {
        if (top >= 99) {
            cout << "Stack overflow." << endl;
            return;
        }
        arr[++top] = value;
    }
    int retrieve() override {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top--];
    }
};

class Queue : public List {
    int arr[100], front, rear; 
public:
    Queue() : front(0), rear(0) {}

    void store(int value) override {
        if (rear >= 100) {
            cout << "Queue overflow." << endl;
            return;
        }
        arr[rear++] = value;
    }
    int retrieve() override {
        if (front == rear) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front++];
    }
};

int main() {
    Stack s;
    Queue q;
    s.store(5);
    s.store(10);
    cout << "Stack retrieved: " << s.retrieve() << endl;
    q.store(15);
    q.store(20);
    cout << "Queue retrieved: " << q.retrieve() << endl;

    return 0;
}
