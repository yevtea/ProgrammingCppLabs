//Ввести координаты точки x, y. Определить какой координатной четверти принадлежит данная точка. Вывести надпись «первая четверть», «вторая четверть» и т.п.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    int x,y; // Объявление переменных
    
    cout << "Введите координату x"<<endl;
    cin >> x;
    cout << "Введите координату y"<<endl;
    cin >> y;
    if (x != 0 || y!= 0) {
        if (x>0) {
            if (y>0) cout << "Первая четверть"<< endl;
            else cout << "Четвертая четверть"<< endl;
        } else {
            if (y>0) cout << "Вторая четверть"<< endl;
            else cout << "Третья четверть"<< endl;
        }
    } else cout << "Точка находится на оси (или в точке 0)" << endl;
    
    return 0;
}
