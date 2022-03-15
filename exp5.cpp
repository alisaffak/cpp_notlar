//Parametre olarak char* alan ve verilen bu pointer'ı fonksiyon içinde boşaltan bir
//fonksiyon yazın. Dışarıdan çağırdıktan sonra pointer'ın NULL olduğunu gösterin.

#include <iostream>

using namespace std;

char point(char* val){
    char* new_value = val;
    delete val;
    if(val != NULL)
        cout << "Pointer is not NULL";
    else
        cout << "pointer is: "<< val;
    return *new_value;
}

int main()
{

    return 0;
}
