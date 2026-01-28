#ifndef EDITOR_CPP
#define EDITOR_CPP

#include<string>
#include "memento.cpp"
using namespace std;

class editor{
    private:
        string str;

    public:

        void write(const string& s){
            str=s;
        }

        void restore(){

        }

        string getContent(){
            return str;
        }

        memento save(){
            return memento(str);
        }

        void restore(memento& s){
            str=s.getContent();
        }

};

#endif