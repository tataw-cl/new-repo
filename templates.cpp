//template example using a swapping function

template<typename T>
void swap(T& a, T& b){
    T temp =  a;
    a = b;
    b= temp;
}

//class template example using a stack
#include<iostream>
#include<vector>

template<typename T>
class stack
{
private:
    std::vector<T> elements;
public:
 void push(const T& value){
    elements.push_back(value);
 }


void pop(){
elements.pop_back();
}

T& top(){
return elements.back();
}

bool empty() const {
    return elements.empty();
}
};

//Runner code to run the stack template program


int main(){
    //create a stack opf integers
    stack<int> intstack;

    //push some values into the stack
    intstack.push(10);
    intstack.push(20);
    intstack.push(30);

    //pop and print the top element
    std::cout << "Top element: " << intstack.top() << std::endl;
    intstack.pop();

    //check if stack is empty

    if(intstack.empty()){
        std::cout << "Stack is empty." << std::endl;
    }
    else{
        std::cout << "Stack is not empty" << std::endl;
    }
    return 0;
}