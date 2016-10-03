#include <iostream>
//#include <cppclass.hpp>
#include "Box2D.h"

/* Интерфейс класса — конструкция, определяющая методы и свойства, предоставляемые классом. */
/* Реализация класса — это способ осуществления работоспособности класса.  */

using namespace std;

/* Реализация пересечения */
void boxCrossing( Box2D&obj1, Box2D&obj2 )
{
  obj1.boxGeometry();
  obj2.boxGeometry();

    double rho_x = 0.0, rho_y = 0.0;
    double l = 0.0, h = 0.0;

/* Вычисление растояния между центрами по осям x и y */
rho_x =fabs(obj1.box2d_x_center - obj2.box2d_x_center);
rho_y = fabs(obj1.box2d_y_center - obj2.box2d_y_center);

/* Вычисление пересечения */
l = (obj1.box2d_lenght + obj2.box2d_lenght) / 2.0;
h = (obj1.box2d_height + obj2.box2d_height) / 2.0;

if  (rho_x > l && rho_y > h)
{ cout<< " NOTCrossing" << endl; }
else
{   cout<< " Crossing" << endl; }
}



int main()
{
   /* SCROLL AND SPIN
QApplication app(argc, argv);

QSpinBox *sb = new  QSpinBox;
QSlider *sl = new  QSlider(Qt::Vertical);

sb->setMaximum(100);
sl->setMaximum(100);


QWidget *window = new QWidget;
QHBoxLayout *layout = new QHBoxLayout;

layout->addWidget(sb);
layout->addWidget(sl);

window->setLayout(layout);
window->show();

QObject::connect(sb, SIGNAL(valueChanged(int)), sl,SLOT(setValue(int)));
QObject::connect(sl, SIGNAL(valueChanged(int)), sb,SLOT(setValue(int)));
*/


/*Show button
 *
QPushButton *pb = new QPushButton("close");
QObject::connect(pb,SIGNAL(clicked()), &app, SLOT(quit()) ); // Close window from pushButton
pb->show();
*/

/* Show text HELLO
 *
QLabel lbl("HELLO");
lbl.show();
*/

/*

Razmer obj1(1,9,6); // объявление объекта
obj1.rho();

Razmer obj2(2,3,4); // объявление объекта
obj2.rho();



CppStudio objCppstudio(11,11,2012); // объявление объекта и инициализвция элементов данных
    objCppstudio.message(); // вызов функции message
    objCppstudio.getDate(); // отобразить дату


AB obj11(1.0, 78.0);     //конструктор сработает на данном этапе (во время создания объекта класса)
obj11.setAB();   //присвоим новые значения переменным
obj11.getAB();   //и выведем их на экран
AB obj21(1.0,89.0);     //конструктор сработает на данном этапе (во время создания 2-го объекта класса)

*/



Box2D box1( 1.0, 1.0, 3.0, 3.0);
Box2D box2 ( 10.0, 10.0, 12.0, 12.0);
Box2D box3(box1);

boxCrossing(box1, box2);
boxCrossing(box3, box2);

Ray2D ray1 (1.0, 1.0, 90.0);
ray1.rayGeometry();



    return 0;
}
