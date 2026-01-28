#include<iostream>
#include "caretaker.cpp"
#include "editor.cpp"
using namespace std;

int main(){

    editor ed;
    caretaker ct;

    ed.write("hello world");

    ct.save(ed);

    cout<<ed.getContent()<<endl;
    ed.write("hello everyone");
    ct.save(ed);

    cout<<ed.getContent()<<endl;

    ct.undo(ed);
    cout<<ed.getContent()<<endl;

    

}

