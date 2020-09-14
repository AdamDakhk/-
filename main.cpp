#include <iostream>

int main() {
int a;
int b;
cout <<"Пожалуйста введите 2 числа"<<endl;
cin >>a;
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout <<"Числа махнулись местами:"<<endl <<b <<endl <<a;
return 0;

}