#ifdef stack_h
#define stack_h

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
#endif // stack_h