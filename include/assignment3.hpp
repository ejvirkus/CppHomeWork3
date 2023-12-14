#pragma once
#include <functional>
#include <string>
#include <map>
#include <vector>
#include <ostream>
namespace Homework
{   
    using Tasks = std::vector<std::pair<std::string, bool>>;
    Tasks assignment3();

    class Default
    {
    private:
        //Loo muutuja number, mis on tüüpi int ja väärtusega 0
        int number = 6;
        
    public:
        // Loo vaikiva konstruktori, ilma argumentideta
        Default(){

        };
        // Loo konstruktor, mis võtab argumendiks int nimetusega i 
        // ja seab number väärtuseks i, deklareeri see siin
        Default(float i) : number(i){}
        // Loo default Copy konstruktor
        Default(const Default& other) : number(other.number) {}        
        // Keela Move konstruktor kasutades delete
        Default(Default&&) = delete;
        // Loo default Copy omistamise operaator
        Default& operator=(const Default& other);
        // Keela Move omistamise operaator kasutades delete
        Default& operator=(Default&&) = delete;
        // Loo default Võrdlus operaator
        bool operator==(const Default& other) const;
        // Loo default Spaceship <=> operaator
        std::ostream& operator<=>(const Default& other) const;
        // Loo default Destruktor 
        ~Default();
    };

    
    class Op
    {
    private:
        // Loo muutuja number, mis on tüüpi float ja väärtusega 0.f
        float number;
        
    public:
        // Vihje: Defineeri meetodid ja konstruktorid .cpp failis, 
        // siin ainult deklaratsioonid
        Op();
        // Loo vaikiva konstruktori, ilma argumentideta
        Op(float i);
        // Loo konstruktor, mis võtab argumendiks float nimetusega i 
        // ja seab number väärtuseks i
        Op(float i) : number(i){}
        // Loo Copy konstruktor
        Op(const Op& other);
        // Loo Move konstruktor
        Op(Op&& other);
        // Loo Copy omistamise operaator
        Op& operator=(const Op& other);
        // Loo Move omistamise operaator
        Op& operator=(Op&& other);
        // Loo Võrdlus operaator
        bool operator==(const Op& other) const;
        // Loo Spaceship operaator
        bool operator<=>(const Op& other) const;
        // Loo Destruktor
        ~Op();

    };
}