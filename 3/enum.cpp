#include <cstdio>
#include <cassert>

enum Color : unsigned int{White, Gray, Red, Black}; //geleneksel enumlar moder C++'da pek kullanılmıyor.
//Yeni gelen scope enum özelli daha çok kullanılır
enum class ScreenColor {White,Red,Yellow,Purple,Black};
enum class TrafficLight {Yellow,Red,Green};

//enum tag
int main(int argc, char const *argv[])
{
    /* underlying type (baz tür) */
    Color myclo = White;
    /* Kapsamlandırılmış enum classların kullanımı(çok tercih edilir) */
    ScreenColor color = ScreenColor::Red;
    TrafficLight light = TrafficLight::Red;

    return 0;
}


