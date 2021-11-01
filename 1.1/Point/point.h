//point.h

#pragma once //файл буде використаний один раз
#include <cmath>
using namespace std;


class Point
{
    private:
    double first;
    double second;

    public:
    double distance()//метод(ф-я класу) 
    {
        return sqrt(first*first+second*second);//теорема піфагора
    }

    Point(double first, double second)
    {
        this->first=first;//використовуємо -> бо аргументи конструктора мають ті самі імена як поля класу
        this->second=second;
        if (first>100||first<-100)
        {
            std::cout<<"First is invalid"<<std::endl; //даємо користувачу знати коли він вийшов за область значень
        }
        if (second>100||second<-100)
        {
            std::cout<<"Second is invalid"<<std::endl;
        }
    }
};
