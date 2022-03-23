#include <iostream>

int foo(int *p, int *q)
{
    *p = 1;
    *q = 2;

    return *p + *q;
}

char str[] = "01230";

int main(int argc, char const *argv[])
{
    using namespace std;

    int a = 3;
    int b = 4;
    int c = foo(&a, &a);
    cout << c;
    (c == a + b ? a : b) = 5;
    cout << a << b;
    int i = 0;
    str[i] = i[str+2]; //*(i + str + 2) bu  da str[2] demek olur yani str'nin sıfırıncı indisine 2. indisini atadık
    cout << str;

    return 0;
}
