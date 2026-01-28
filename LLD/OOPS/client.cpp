#include<bits/stdc++.h>
#include "paymentService.cpp"
#include "credit.cpp"
#include "debit.cpp"
#include "wallet.cpp"
#include "upi.cpp"

using namespace std;

int main(){
    paymentService p;
    p.addPaymentService("rumit",new credit("rumit",1234));
    p.addPaymentService("chinu",new debit("chinu",6789));
    p.makepayment("chinu");
    p.makepayment("rumit");
    p.addPaymentService("tony",new upi("tony@upi"));
    p.makepayment("tony");
    p.addPaymentService("bruce",new wallet());
    p.makepayment("bruce"); 

}

