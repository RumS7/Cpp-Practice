#include<iostream>
using namespace std;

template<typename T>
class unq_ptr{
    private:
        T* res;

    public:

    unq_ptr(T* x=nullptr):res(x){ cout<<"ctor"<<endl;} //parameterised constructor
    unq_ptr(const unq_ptr<T>& ptr)=delete;
    unq_ptr& operator=(const unq_ptr<T>& ptr)=delete;

    //copy constructor
    unq_ptr(unq_ptr<T>&& ptr){
        
            
        res=ptr.res;
        ptr.res=nullptr;
    
    }
    // copy assignment operator

    unq_ptr<T>& operator=(unq_ptr<T>&& ptr){

        if(this!=&ptr){
            if(res) delete res;
            res=ptr.res;
            ptr.res=nullptr;
            
        }
        return *this;
    }

    T& operator*(){
        return *res;
    }
    T* operator->(){
        return res;
    }
    T* get(){
        return res;
    }
    void reset(T* ptr){
        if(res) delete res;
        res=ptr;
    }

    ~unq_ptr(){
        if(res) delete res;
    }
};

int main(){

    unq_ptr<int>ptr1(new int(5));
    //unq_ptr<int>ptr2(ptr1); //compilation error; copy constructor
    // unq_ptr<int>ptr3;
    //ptr3=ptr2; //compilation error; copy assignment operator
    //unq_ptr<int>ptr4=ptr2; //compilation error; copy constructor
    unq_ptr<int>ptr4=std::move(ptr1);
    // unq_ptr<int>ptr5(std::move(ptr1)); 
    //cout<<*ptr1<<endl;
    //cout<<*ptr4<<endl;
    // ptr1.get();
    // ptr1.reset(new int(10));
    // ptr1->func();

}