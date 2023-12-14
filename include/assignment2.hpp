#pragma once
#include <functional>
#include <string>
#include <map>
#include <ostream>
namespace Homework
{   
    using Tasks = std::vector<std::pair<std::string, bool>>;
    Tasks assignment2();

    // Vihje: class ja struct on samaväärsed, ainus erinevus on vaikimisi ligipääsetavuses
    // class on private, struct on public
    

    //Loo struct, nimetusega A
    struct A {};
    
    

    //Loo klass, nimetusega B, mis pärineb klassist A
    class B : A {};

    //Loo struct, nimetusega D, mis sisaldab liikmeid A ja int nimetusega a ja i
    struct D {
        A a;
        int i;
    };
    
    
    
    

    // Loo klass nimetusega E, mis sisaldab liiget int nimetusega number väärtusega 0
    // ja constexpr const meetodit int nimetusega get_number, mis tagastab number väärtuse
    // ja constexpr meetodit void nimetusega set_number, 
    // mis võtab argumendiks int nimetusega i ja seab number väärtuseks i
    class E {
    private:

        int number;

    public:

        E() : number(0) {}


        constexpr int get_number() {
            return number;
        }

        constexpr void set_number(int i) {
            number = i;
        }
    };
    
    




    

}