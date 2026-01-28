#ifndef POST_CPP
#define POST_CPP

#include<iostream>
#include<string>
#include "comment.cpp"
#include "user.cpp"
using namespace std;

class post{
    private:
        string text;//this could be a separate class(holds image, metadata etc)
        int upvote;
        string subreddit;
        vector<comment> com;
        int no; //no of comments: design change
    public:
            
    
        post(string subreddit,string text){
            this->subreddit=subreddit;
            this->text=text;
            this->upvote=0;
            int no=0;
        }
        void addvote(){
            upvote++;
        }

        void addCom(comment& com1){
            com.push_back(com1);
            no++;
        }
        
        void print(){
            cout<<"no of upvotes:"<<upvote<<endl;
            
            cout<<"no of direct comments"<<com.size()<<endl;
            cout<<"Post content:"<<text<<endl;
        }
};

#endif