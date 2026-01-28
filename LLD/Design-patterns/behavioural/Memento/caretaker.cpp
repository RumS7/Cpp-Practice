#include<string>
#include<stack>
#include "memento.cpp"
#include "editor.cpp"
using namespace std;

class caretaker{

    private:
        stack<memento>s;
    
    public:

        void save(editor& ed){
            s.push(ed.save());
        }
        
        void undo(editor& ed ){

            if(!s.empty()){
                s.pop();
                ed.restore(s.top());
            }
        }

};