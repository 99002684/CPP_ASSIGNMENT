#include <iostream>
#include<math.h>
#include<string.h>
#include "account.h"
#include "box.h"
#include "color.h"
#include "customer.h"
#include "image.h"
#include "ip.h"
#include "point.h"


class CANFrame{};
Account::Account() :
    m_accNumber(0), m_accName(""), m_balance(0) {

}
Account::Account(int id, std::string name, double bal) :
  m_accNumber(Aid), m_accName(Aname), m_balance(Abal) {

}
Account::Account(const Account& ref) :
        m_accNumber(ref.m_accNumber), m_accName(ref.m_accName),
                                              m_balance(ref.m_balance) {

}
void Account::credit(double amount) {
  m_balance += amount;
}
void Account::debit(double amount) {
  //min balance check
  m_balance -= amount;
}
int Account::getM_accNumber() {
  return m_accNumber;
}
std::string Account::getM_accName() {
  return m_accName;
}
double Account::getM_balance() const {
    return m_balance;
}
void Account::display() {
    std::cout << m_accNumber << "," << m_accName << ","
                                         << m_balance << "\n";
}





Box::Box() :
    m_length(0), m_breadth(0), m_height(0) {

}
Box::Box(int l, int b, int h) :
  m_length(ln),m_breadth(bth), m_height(ht) {

}
Box::Box(int ll) :
    m_length(ll){
}
Box::Box(const Box& ref) :
        m_length(ref.m_length),m_breadth(ref.m_breadth), m_height(ref.m_height) {

}

void Box::length(int ln){
m_length=ln;
std::cout<<"Length is: "<<m_length<<endl;
}

void Box::breadth(int bth){
m_breadth=bth;
std::cout<<"Breadth is: "<<m_breadth<<endl;
}

void Box::height(int ht){
m_height=ht;
std::cout<<"height is: "<<m_height<<endl;
}

void volume(int ln, int bth, int ht){
int vol=ln*bth*ht;
std::cout<<"Volume is: "<<vol<<endl;
}

void Box::display() {
    std::cout << m_length << "," << m_breadth << ","<< m_height<<"\n";
}



Color::Color() :
    m_r(0), m_g(0), m_b(0) {

}
Color::Color(int red, int green, int blue) :
  m_r(rd), m_g(grn), m_b(bl) {

}
Color::Color(string color){
cout<<"Enter the desired color: ";
cin>>color;
cout<<color<<endl;
}
Color::Color(color_t x){
    switch(x)
    {
        case rd:
            cout<<"Red";
            break;
        case bl:
            cout<<"Blue";
            break;
        case grn:
            cout<<"Green";
            break;
        case yellow:
            cout<<"Yellow";
            break;
        case black:
            cout<<"Black";
            break;
        default:
            cout<<"Undefined Color";
            break;
    }
}
void Color::invert() {
    int neg = 0xFFFFFF - m_r*m_g*m_b;
 neg = (0xFFFFFF - m_r*m_g*m_b) | 0xFF000000;
    cout<<"The Color has been inverted "<<endl;
cout<<neg;
}
void Color::display() {
    cout<<"The Color composition is as follows: "<<endl;
    std::cout << "Red: "<<m_r << ", Green: " << m_g << ",Blue: " << m_b <<endl;
}
//}

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



Image::Image() :
    m_x(0), m_y(0), m_width(0), m_height(0) {

}
Image::Image(int xx, int yy, int ww, int hh) :
  m_x(xxx), m_y(yyy), m_width(www), m_height(hhh) {

}
Image::Image(const Image& ref) :
        m_x(ref.m_x), m_y(ref.m_y),m_width(ref.m_width), m_height(ref.m_height) {

}
void Image::move(int Quad, int pos1, int pos2) {
  if(Quad==1){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to first quadrant and now the position is" << m_x <<","<< m_y ;
    }
    else if(Quad==2){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to second quadrant and now the position is" << m_x<<"," << m_y ;
    }
    if(Quad==3){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to third quadrant and now the position is" << m_x <<"," << m_y ;
    }
    if(Quad==4){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to forth quadrant and now the position is" << m_x<< "," << m_y ;
    }

}
void Image::scale(int wwww, int hhhh) {
  std::cout << wwww << hhhh;
}
int Image::resize(int num1, int num2) {
  m_x=m_x+num1;
  m_y=m_y+num2;
  std::cout<< m_x <<"," << m_y;
}

void Image::display() {
    std::cout << m_x << "," << m_y << "," << m_width << ","<< m_height<<"\n";
}


IPAddress::IPAddress() :
    ipval("127.0.0.0") {

}

IPAddress::IPAddress(int i1,int i2, int i3, int i4 ) :
 ipval(to_string(i1)+"."+to_string(i2)+"."+to_string(i3)+"."+to_string(i4)){

}

IPAddress::IPAddress(int i) :
    ipval(to_string(i)) {
}



bool IPAddress::isLoopBack(std::string s1) {
    if (s1=="127.0.0.1")
    {
        std::cout<<"true"<<endl;
    }
    else{
        std::cout<<"false"<<endl;
    }
}
void IPAddress::getIPClass(std::string s, IPClass){
string temp;
int i=0;
while (s[i]!='.')
{
    temp[i]=temp[i]+s[i];
    i=i+1;
}
int icheck=stoi(temp);
if(icheck>0 && icheck<127)
{
std::cout<<"IPClass: a "<<IPClass::a;
}
if(icheck>127 && icheck<191)
{
std::cout<<"IPClass: b "<<IPClass::b;
}
if(icheck>191 && icheck<223)
{
std::cout<<"IPClass: c "<<IPClass::c;
}
if(icheck>223 && icheck<240)
{
std::cout<<"IPClass: d "<<IPClass::d;
}

}
void IPAddress::display() {
    std::cout <<"Your IP Address is:"<<ipval;
}


Point::Point():
    m_x(0), m_y(0) {
}
Point::Point(int a, int b):
    m_x(A),m_y(B) {
}
Point::Point(const Point& ref) :
    m_x(ref.m_x), m_y(ref.m_y) {
}
void Point::distanceFromOrigin(int a,int b) {
    int d =(sqrt(A^2 + B^2));
    std::cout << "distance from Origin is" << d << "\n";
}
void Point::quadrant(Quadrant x) {
    switch(x)
    {
        case q1:
            cout<<"First Quadrant";
            break;
        case q2:
            cout<<"Second Quadrant";
            break;
        case q3:
            cout<<"Third Quadrant";
            break;
        default:
            cout<<"Fourth Quadrant";
            break;
    }

}

void Point::isOrigin(int a,int b) {
    if(A==0 && B==0)
        std::cout << "Point is on the Origin";
}

void Point::isOnXAxis(int a,int b) {
    if(B==0)
        std::cout << "Point lies on X axis";
}

void Point::isOnYAxis(int a,int b) {
    if(A==0)
        std::cout << "Point lies on Y axis";
}

void Point::display() {
    std::cout << m_x << "," << m_y << "\n";
}

int main()
{

    return 0;
}
