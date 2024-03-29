#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "includes.hpp"
using namespace std;

string    setchar    (char c);
string    walk       (int k);
string    change     (int count);
string    go_to      (int current_cell, int where);

string    mov        (int whereto);
string    copy       (int whereto, int buffer);
string    copyto     (int current_cell, int whereto, int buffer);
string    print      (int lenght);
string    split      (string what);
string    sub        (int p1, int p2, int resultpos, int current_cell);
string    sum        (int p1, int p2, int resultpos, int current_cell);

#endif