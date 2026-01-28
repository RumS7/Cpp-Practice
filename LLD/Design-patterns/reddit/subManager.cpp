#ifndef SUBMANAGER_CPP
#define SUBMANAGER_CPP

#include<string>
#include<map>
#include "post.cpp"
using namespace std;

class subManager{
    
    map<user,post>posts;
    vector<string>AllSub;
    public:

        void createSub(user& user,const string& sub){
            user.addSub(sub,"admin");
            AllSub.push_back(sub);
        }
        
        void subscribe(user& user,const string& sub){
            user.addSub(sub,"viewer");
        }
        post addpost(user& user,const string&  sub,const string& text){
            
            post p(sub,text);
            //posts[user]=p;
            return p;

        }

        void upvote(post& p){
            p.addvote();
        }

        void addToSub(user& usr,string sub,string role){
            usr.addSub(sub,role);
        }
        void updateRole(user& usr,string sub,string role){
            usr.update(sub,role);
        }

        comment putComment(user& usr,post& p, string com){
            string username=usr.getname();
            comment c(username,com);
            p.addCom(c);
            return c;
        }

        void comTocom(user& usr,comment& com, string s){
            string username=usr.getname();
            com.add(username,s);
            
        }

        vector<string> searchSub(string s){
            vector<string>v;
            for(auto x:AllSub){
                if((x.find(s) != string::npos)){
                    v.push_back(x);
                }
            }
            return v;

        }

};
#endif