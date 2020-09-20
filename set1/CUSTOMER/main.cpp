#include <iostream>
#include "customer.h"
Customer::Customer() :
    m_custId(0), m_phone(0), m_custName(0), m_balance(0) {

}
Customer::Customer(int ph , std::string name, int custid, double bal) :
  m_phone(phn), m_custName(cname), m_custId(cid), m_balance(bl) {

}
Customer::Customer(int ph , std::string name, int id) :
  m_phone(phn), m_custName(cname), m_custId(cid) {

}
Customer::Customer(const Customer& ref) :
        m_custId(ref.m_custId), m_phone(ref.m_phone), m_type(ref.m_type), m_custName(ref.m_custName), m_balance(ref.m_balance){
}
void Customer::credit(AccountType t) {
  switch(t)
  {
  case Savings:
    std::cout<<"Credit money to Savings Account...";
  case Current:
    std::cout<<"Credit money to Current Account...";
  }
}
void Customer::makeCall() {
  std::cout<<"Calling on phone number : "<<m_phone<<" ...";
}
double Customer::getBalance() const {
    return m_balance;
}
void Customer::display() {
    std::cout << "Customer ID is: "<<m_custId<<", Account Type: "<<m_type<<", Customer Name: "<<m_custName<<", Balance: " << m_balance;
}

int main(){return 0;}
