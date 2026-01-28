#include<bits/stdc++.h>
#include "payment.cpp"
using namespace std;

class paymentService{

    private:
        map<string,payment*>m;

    public:

        paymentService(){};

        void addPaymentService(string user,payment* usercard){
            m[user]=usercard;
        }

        void makepayment(string user){
            payment* p=m[user];
            p->pay();
        }

    
};