#ifndef COMMENT_CPP
#define COMMENT_CPP

#include<string>
using namespace std;

class comment{

    private:
        string text;
        string username;
        vector<comment>v;
    
    public:
        comment(string usr, string text):text(text),username(usr){}

        void add(string usr, string text){
            comment c(usr,text);
            v.push_back(c);
        }
};

#endif