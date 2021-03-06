//Тема: Построение треугольника.
//Написать программу, которая запрашивает у пользователя
//три числа a, b, c, которые являются длинами сторон треугольника. Если нельзя построить такой треугольник, то выдать соответствующее сообщение; если можно, то напечатать какой он: равносторонний, равнобедренный или разносторонний.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int a, b, c; // Объявление переменных
    cout << endl << "Сторона а = "; // Подсказка
    cin >> a; // Ввод переменной
    cout << endl << "Сторона b = ";
    cin >> b;
    cout << endl << "Сторона c = ";
    cin >> c;
    
    if (a > 0 && b > 0 && c > 0){
        if (a + b > c && a + c > b && b + c > a){
            cout << "Такой треугольник существует ";
            if (a == b && b == c)
                cout << "(равносторонний)";
            else {
                if (a == b || b == c || a == c)
                    cout << "(равнобедренный)"<<endl;
                else cout << "(разносторонний)"<<endl;
            }
        } else cout <<"Такого треугольника не существует"<<endl;
    } else cout <<"Стороны могут быть только положительными"<<endl;
    return 0;
}

