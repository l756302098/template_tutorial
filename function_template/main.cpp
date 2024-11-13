#include <iostream>

template<typename T>
void swap(T* a,T* b)
{
    T tmp = *a;
    *a = *b;
    *b = tmp; 
}


int main(){
    int a =1;
    int b = 10;
    swap<int>(&a,&b);
    std::cout << "a:" << a << " b:" << b << " \n";
    return 0;
}
