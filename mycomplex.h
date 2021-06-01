/*!
    @file
    @brief Заголовочный файл класса Complex
*/
#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;
/*!
    @brief Класс комплексного числа
*/

class Complex

{
    double Re;
    double Im;
/*!
    @brief Класс комплексного числа
*/
    public:

    Complex(double aRe = 0, double aIm =0);
    Complex(const Complex &);
    ~Complex();

/*!
     @brief Установление мнимой и действительной составляющих
*/

    void Set(double aRe, double aIm = 0);
    operator double();
    double abs();
/*!
     @brief Дружественный класс операции перегрузки ввода >>
*/
    friend istream & operator >> (istream &, Complex &);

/*!
     @brief Дружественный класс операции перегрузки вывода <<
*/
    friend ostream & operator << (ostream &, Complex &);

    Complex operator + (const Complex &);
    Complex operator - (const Complex &);
    Complex operator + (const double &);

/*!
     @brief Дружественный класс операции сложения
*/

    friend Complex operator + (const double &, const Complex &);
           Complex operator - (const double &);

    /*!
     @brief Дружественный класс операции вычитания
    */

    friend Complex operator - (const double &, const Complex &);
           Complex operator * (const Complex &);

     /*!
     @brief Дружественный класс операции умножения
     */

           Complex operator * (const double &);
    friend Complex operator * (const double &, const Complex &);
           Complex operator / (const double &);
           Complex & operator += (const Complex &);
           Complex & operator -= (const Complex &);
           Complex & operator *= (const Complex &);
           Complex & operator += (const double &);
           Complex & operator -= (const double &);
           Complex & operator *= (const double &);
           Complex & operator /= (const double &);
           Complex & operator = (const Complex &);
           Complex & operator = (const double &);
};
#endif
