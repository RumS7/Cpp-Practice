#include<string>
#include<map>
#include "user.cpp"
#include "post.cpp"
using namespace std;

class userManager{

    //store all user
    vector<user>AllUser;
    
    
    public:

        //if user is already there then what to do!!
        user addUser(const string& name){
            user b(name);
            AllUser.push_back(b);
            return b;
        }

        vector<string> searchUser(string s){
            vector<string>v;
            for(auto x:AllUser){
                string y=x.getname();
                if((y.find(s) != string::npos)){
                    v.push_back(y);
                }
            }
            return v;
        }

};