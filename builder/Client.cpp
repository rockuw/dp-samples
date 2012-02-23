#include <fstream>
#include "Director.h"
#include "NormalTextBuilder.h"
#include "HtmlTextBuilder.h"

using namespace std;

int main(int argc, char *argv[])
{
    ofstream normalOut("out.txt");
    ofstream htmlOut("out.html");

    Director normalDirector(new NormalTextBuilder());
    Director htmlDirector(new HtmlTextBuilder());

    normalDirector.setTitle("Hello World");
    normalDirector.addParagraph();
    normalDirector.appendText("Unlike traditional c-strings, which are mere sequences of characters in a memory array, C++ string objects belong to a class with many built-in features to operate with strings in a more intuitive way and with some additional useful features common to C++ containers.");
    normalDirector.addParagraph();
    normalDirector.appendText("Except for the copy constructor, an optional final parameter exists for all basic_string constructors, whose type is its Allocator template argument. This parameter influences the memory allocation model to be used for the object. To provide a better readability, and because under no known compiler implementation the memory allocation model for strings (allocator<char>) is affected by its value, it has not been included in the declarations above, but see the basic template member declaration ahead for a more complete declaration.");
    normalOut << normalDirector.getResult();

    htmlDirector.setTitle("Hello World");
    htmlDirector.addParagraph();
    htmlDirector.appendText("Unlike traditional c-strings, which are mere sequences of characters in a memory array, C++ string objects belong to a class with many built-in features to operate with strings in a more intuitive way and with some additional useful features common to C++ containers.");
    htmlDirector.addParagraph();
    htmlDirector.appendText("Except for the copy constructor, an optional final parameter exists for all basic_string constructors, whose type is its Allocator template argument. This parameter influences the memory allocation model to be used for the object. To provide a better readability, and because under no known compiler implementation the memory allocation model for strings (allocator<char>) is affected by its value, it has not been included in the declarations above, but see the basic template member declaration ahead for a more complete declaration.");
    htmlOut << htmlDirector.getResult();

    return 0;
}
