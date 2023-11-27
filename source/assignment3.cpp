#include "../include/assignment3.hpp"
#include <typeinfo>
#include <type_traits>
#include <functional>
#include <vector>
#include <array>
#include <memory>
#include <iostream>

// Definitsioonid klassile Op
// Vihje: alusta Homework:: namespace'ist

// Loo vaikiva konstruktori, ilma argumentideta

// Loo konstruktor, mis võtab argumendiks float nimetusega i
// ja seab number väärtuseks i

// Loo Copy konstruktor

// Loo Move konstruktor

// Loo Copy omistamise operaator


    
    

// Loo Move omistamise operaator


    
    

// Loo Võrdlus operaator


    

// Loo Spaceship <=> operaator


    






// Loo Destruktor


// Operaatorid
Homework::Tasks Homework::assignment3()
{
    using namespace std::literals;

    // Loo muutuja a, mis on tüüpi Default
    
    // Loo muutuja b, mis on tüüpi Default ja väärtusega 1
    
    // Loo muutuja c, mis on tüüpi Default ja väärtusega b
    
    
    // Loo muutuja d, mis on tüüpi Op
    
    // Loo muutuja e, mis on tüüpi Op ja väärtusega 1.f
    
    
    // Kontroll, et muutujad on õiget tüüpi ja väärtusega
    Tasks results;
    //results.reserve(16ull);
    
    results.push_back({"Default is class", (std::is_class_v<Default>)});
    results.push_back({"Default is default contructed", (std::is_default_constructible_v<Default>)});
    results.push_back({"Default is copy constructable", (std::is_copy_constructible_v<Default>)});
    results.push_back({"Default is copy assignable", (std::is_copy_assignable_v<Default>)});
    results.push_back({"Default is not move constructable", (!std::is_move_constructible_v<Default>)}); 
    results.push_back({"Default is not move assignable", (!std::is_move_assignable_v<Default>)});
    results.push_back({"Default is destructable", (std::is_destructible_v<Default>)});
    results.push_back({"Default is equality comparable", (std::equality_comparable<Default>)});
    results.push_back({"Default is less than comparable", (std::totally_ordered<Default>)});

    results.push_back({"a is of type Default", (std::is_same_v<decltype(a), Default>)});
    results.push_back({"b is of type Default", (std::is_same_v<decltype(b), Default>)});
    results.push_back({"c is of type Default", (std::is_same_v<decltype(c), Default>)});
    results.push_back({"a == a", (a == a)});
    results.push_back({"a != b", (a != b)});
    results.push_back({"a < b", (a < b)});
    results.push_back({"c == b", (c == b)});

    results.push_back({"Op is class", (std::is_class_v<Op>)});
    results.push_back({"Op is default contructed", (std::is_default_constructible_v<Op>)});
    results.push_back({"Op is copy constructable", (std::is_copy_constructible_v<Op>)});
    results.push_back({"Op is copy assignable", (std::is_copy_assignable_v<Op>)});
    results.push_back({"Op is move constructable", (std::is_move_constructible_v<Op>)});
    results.push_back({"Op is move assignable", (std::is_move_assignable_v<Op>)});
    results.push_back({"Op is destructable", (std::is_destructible_v<Op>)});
    results.push_back({"Op is equality comparable", (std::equality_comparable<Op>)});
    results.push_back({"Op is less than comparable", (std::totally_ordered<Op>)});
    results.push_back({"d is of type Op", (std::is_same_v<decltype(d), Op>)});
    results.push_back({"e is of type Op", (std::is_same_v<decltype(e), Op>)});
    results.push_back({"d == d", (d == d)});
    results.push_back({"d != e", (d != e)});
    results.push_back({"d < e", (d < e)});

    return results;
}

