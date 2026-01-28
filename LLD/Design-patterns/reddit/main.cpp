
#include "subManager.cpp"
#include "userManager.cpp"
#include "user.cpp"
#include "post.cpp"

int main(){

    userManager mgr;
    subManager smgr;
    user x=mgr.addUser("rumit");
    user y=mgr.addUser("shanu");
    
    smgr.createSub(x,"sub1");
    smgr.createSub(x,"sub2");
    smgr.createSub(x,"sub3");
    smgr.subscribe(y,"sub2");

    post p=smgr.addpost(x,"sub1","hello world");

    smgr.upvote(p);//take user maybe

    user z=mgr.addUser("raj");
    smgr.addToSub(z,"sub1","moderator");
    smgr.updateRole(z,"sub1","admin");
    comment c=smgr.putComment(z,p,"kutte");
    
    smgr.comTocom(x,c,"kamine");

    vector<string>v= smgr.searchSub("sub");

    for(auto i:v){
        cout<<i<<endl;
    }

    vector<string>v2=mgr.searchUser("r");

    for(auto i:v2){
        cout<<i<<endl;
    }

    p.print();
    comment c1=smgr.putComment(z,p,"suar");
    smgr.upvote(p);
    p.print();
    // smgr.getAllPost();
    // smgr.getAllSub();
    // smgr.SubMemberList();

    //implement a functionality get all subreddits and its post

}