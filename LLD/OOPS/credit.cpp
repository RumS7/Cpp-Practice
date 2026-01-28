#include<bits/stdc++.h>
#include "card.cpp"
#include "payment.cpp"
using namespace std;

class credit:public card{
        public:

            credit(string uname, int cnum){
                this->username = uname;
                this->cardnumber = cnum;
            }
            void pay(){
                cout<<"paying using credit card"<<endl;
            }

};