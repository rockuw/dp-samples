#include "Editor.h"
#include <iostream>

using namespace std;

Editor::~Editor(){
    delete _linebreak;
}

void Editor::keyPressed(const char c){
    if(c == '\n'){
        append(_linebreak->newline());
    } else {
        append(c);
    }
}

void Editor::append(const char c){
    _content.append(1, c);
}

void Editor::append(const string& str){
    _content.append(str);
}

void Editor::show(){
    cout << _content << endl;
}
