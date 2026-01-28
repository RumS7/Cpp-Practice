#ifndef CARD_CPP
#define CARD_CPP

#include <bits/stdc++.h>
using namespace std;

class payment;
class card: public payment{
    protected:
        string username;
        int cardnumber;

    public:
        

        void getuser(){
            cout<<"Username is:"<<username<<endl;
        }

        void getcardno(){
            cout<<"card no is: "<<cardnumber<<endl;
        }

};

#endif