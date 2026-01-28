#ifndef MEMENTO_CPP
#define MEMENTO_CPP

#include<string>
using namespace std;

class memento{
    private:
        string str;
    
    public:

        ~memento(){}

        memento(string s){
            str=s;
        }

        void write(string& s){
            str=s;
        }

        string getContent(){
            return str;
        }


};

#endif