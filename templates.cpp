//template example using a swapping function

template<typename T>
void swap(T& a, T& b){
    T temp =  a;
    a = b;
    b= temp;
}

//class template example using a stack
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