#ifndef USER_CPP
#define USER_CPP

#include<string>
#include<vector>
using namespace std;
class user{

    private:
        string name;
        vector<pair<string,string>> subreddit;
    
    public:

        user(string name):name(name){}

        void addSub(string s,string role){

            subreddit.push_back({s,role});
        }

        void update(string s,string role){

            for(auto x:subreddit){
                if(x.first==s){
                    x.second=role;
                }
            }
        }

        string getname(){
            return name;
        }


};

#endif