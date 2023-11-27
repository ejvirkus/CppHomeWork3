#include "../include/assignment2.hpp"
#include <typeinfo>
#include <type_traits>
#include <functional>
#include <vector>
#include <array>
#include <memory>
#include <iostream>

// Klassid
Homework::Tasks Homework::assignment2()
{
    using namespace std::literals;

    // Kasuta klassi A, et luua muutuja a
    
    // Kasuta klassi B, et luua muutuja b
    
    // Kasuta structi D, et luua muutuja d
    
    // Kasuta structi D, et luua muutuja d1, mis võtab argumendiks a ja 1
    
    // Kasuta structi E, et luua muutuja e
    // Siis, muuda liikme number väärtuseks 3
    
    

    
    // Kontroll, et muutujad on õiget tüüpi ja väärtusega
    Tasks results;
    results.reserve(32ull);

    results.push_back({"A is a class", (std::is_class_v<A>)});
    results.push_back({"B is a class", (std::is_class_v<B>)});
    results.push_back({"A is base of B", (std::is_base_of_v<A, B>)});
    results.push_back({"D is a class", (std::is_class_v<D>)});
    results.push_back({"D has member A", (std::is_member_object_pointer_v<decltype(&D::a)>)});
    results.push_back({"D has member int", (std::is_member_object_pointer_v<decltype(&D::i)>)});
    results.push_back({"E is a class", (std::is_class_v<E>)});
    results.push_back({"E has member function get_number", (std::is_member_function_pointer_v<decltype(&E::get_number)>)});
    results.push_back({"E has member function set_number", (std::is_member_function_pointer_v<decltype(&E::set_number)>)});
    results.push_back({"E's get_number is const", (std::is_same_v<decltype(&E::get_number), int (E::*)() const>)});

    results.push_back({"a is of type A", (std::is_same_v<decltype(a), A>)});
    results.push_back({"b is of type B", (std::is_same_v<decltype(b), B>)});
    results.push_back({"d is of type D", (std::is_same_v<decltype(d), D>)});
    results.push_back({"d1 is of type D", (std::is_same_v<decltype(d1), D>)});
    results.push_back({"e is of type E", (std::is_same_v<decltype(e), E>)});

    results.push_back({"d1.i is 1", (d1.i == 1)});
    results.push_back({"e.get_number() is 3", (e.get_number() == 3)});
    results.push_back({"e.set_number(5)", (e.set_number(5), e.get_number() == 5)});

    return results;
}

