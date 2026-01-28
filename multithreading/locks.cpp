#include<iostream>
#include<thread>
#include<vector>
#include<mutex>
using namespace std;

int count=0; //shared resource
mutex mtx;

void func1(){
    
    for(int i=0;i<1000;i++){
        lock_guard<mutex>lock(mtx);
        ::count++;
    }
    
}

int main(){

    vector<thread> v;

    for(int i=0;i<500;i++){
        v.push_back(thread(func1));
    }

    for(auto& x:v){
        x.join();
    }

    cout<<"counter value: "<<::count<<endl;
    return 0;

}