#include<iostream>
#include "complex.h"

Complex::Complex() :
    m_real(0), m_imag(0) {

}
Complex::Complex(int rl, int ig) :
  m_real(rl), m_imag(ig) {

}
Complex::Complex(int rl):
    m_real(rl){

   }

Complex Complex::operator+(){
return(+m_real, m_imag);
}

Complex Complex::operator-(){
return(-m_real, -m_imag);
}

Complex Complex::operator*(){
int real = (m_real*m_real) - (m_real*m_imag);
int imag = (2*m_real*m_imag);
return(real, imag);
}

Complex Complex::operator++() {
    ++m_real;
   return(m_real);
}
Complex Complex::operator++(int r1) {
    for (int i=0; i<r1; i++)
    {
      ++m_real;
    }
    return(m_real);
}
bool Complex::operator==(const Complex &ref) {
    if((ref.m_real==m_real)&&(ref.m_imag==m_imag))
        {
            return 1;
    }
    else
        {
            return 0;
    }
}

void Complex::display() {
    cout<<m_real<<endl;
    cout<<m_imag<<endl;
}


int main(){

    return 0;
}
