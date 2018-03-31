#include <iostream>
#include "Fraccion.h"
int main() {
    Fraccion frac1(1,4);
    Fraccion frac2(1,3);
    Fraccion suma= frac1+frac2;
    Fraccion resta= frac1-frac2;
    Fraccion multiplicacion=frac1*frac2;
    Fraccion division= frac1/frac2;

    bool compare_a;
    frac1<frac2? compare_a= true : compare_a= false;
    bool compare_b;
    frac1>frac2? compare_b= false : compare_b= true;
    bool  compare_c;
    frac1<=frac2? compare_c= true : compare_c= false;
    bool  compare_d;
    frac1>=frac2? compare_d= false : compare_d= true;
    bool  compare_e;
    frac1==frac2? compare_e= true : compare_e= true;
    bool compare_f;
    frac1!=frac2? compare_f= true : compare_f= false;

    std::cout<<"\n";
    std::cout << "Total suma:"<< suma.To_String()<<std::endl;
    std::cout<<"\n";
    std::cout <<  "Total resta:"<< resta.To_String()<<"\n";
    std::cout<<"\n";
    std::cout<< "Total Multiplicacion:"<<multiplicacion.To_String()<<"\n";
    std::cout<<"\n";
    std::cout<< "Total Division"<<division.To_String()<<"\n";
    //Comparadores
    std::cout<<"FRACCION 1 < FRACCION 2? "<<"\n";
    std::cout<< frac1.To_String()<<"<"<<frac2.To_String()<<"\n";
    if(compare_a == true){
        std::cout<<"This is: True";
    }else{std::cout<<"This is: False";}
    std::cout<<"\n";

    std::cout<<"FRACCION 1 > FRACCION 2? "<<"\n";
    std::cout<< frac1.To_String()<<">"<<frac2.To_String()<<"\n";
    if(compare_b == true){
        std::cout<<"This is: True";
    }else{std::cout<<"This is: False";}
    std::cout<<"\n";

    std::cout<<"FRACCION 1 <= FRACCION 2? "<<"\n";
    std::cout<< frac1.To_String()<<"<="<<frac2.To_String()<<"\n";
    if(compare_c == true){
        std::cout<<"This is: True";
    }else{std::cout<<"This is: False";}
    std::cout<<"\n";

    std::cout<<"FRACCION 1 >= FRACCION 2? "<<"\n";
    std::cout<< frac1.To_String()<<">="<<frac2.To_String()<<"\n";
    if(compare_d == true){
        std::cout<<"This is: True";
    }else{std::cout<<"This is: False";}
    std::cout<<"\n";

    std::cout<<"FRACCION 1 == FRACCION 2? "<<"\n";
    std::cout<< frac1.To_String()<<"=="<<frac2.To_String()<<"\n";
    if(compare_e == true){
        std::cout<<"This is: True";
    }else{std::cout<< "This is: False";}
    std::cout<<"\n";

    std::cout<<"FRACCION 1 != FRACCION 2? "<<"\n";
    std::cout<< frac1.To_String()<<"!="<<frac2.To_String()<<"\n";
    if(compare_f == true){
        std::cout<<"This is: True";
    }else{std::cout<<"This is: False";}
    std::cout<<"\n";
}