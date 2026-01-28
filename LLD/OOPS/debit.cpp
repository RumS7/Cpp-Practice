#include<bits/stdc++.h>
#include "card.cpp"
#include "payment.cpp"
using namespace std;

class debit:public card{
        public:

            debit(string uname, int cnum){
                this->username = uname;
                this->cardnumber = cnum;
            }

            void pay(){
                cout<<"paying using debit card"<<endl;
            }

};