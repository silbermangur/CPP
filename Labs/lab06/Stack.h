//
// Created by Gur Silberman on 12/04/2022.
//

#ifndef LAB06_STACK_H
#define LAB06_STACK_H

class Stack{

private:
    int* arr;
    int size;
    int index;
    bool isEmpty;

//הרצאה 4 עמוד  17
public:
    // the Big 5
    ~Stack(); // destructor
    Stack(); // Empty Constracotr
    Stack(int size); // Constractor
    Stack(Stack& other); // Copy Constractor
    Stack& operator=(Stack& s); //copy assignment operator
    Stack(Stack&& s); //move Constractor
    Stack& operator=(Stack&& s); // move assignment operator

    //FUNCTIONS
    void Push(int Element);
    int Pop();
    int Top();
    bool Empty();
    void Transfer(Stack& destension);

};

#endif //LAB06_STACK_H
