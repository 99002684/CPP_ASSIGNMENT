
#include <iostream>
#include "box.h"

using namespace std;

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




int main()
{

    return 0;
}
