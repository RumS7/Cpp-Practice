#include<iostream>
#include<thread>
#include<vector>
using namespace std;

void func(){
    cout<<this_thread::get_id()<<endl;
    cout<<"hello world"<<endl;
}

int main(){
    cout<<"main-thread-id"<<this_thread::get_id()<<endl;
    vector<thread>v;
    
    int n=thread::hardware_concurrency();
    cout<<"no of threads created: "<<n<<endl;
    for(int i=0;i<5;i++){
        v.push_back(thread(func));
    }
    for(int i=0;i<5;i++){
        v[i].join();
    }
    return 0;
}