#include <stdio.h>
bool isPalindrome(int x) {
    if(!x || x < 0) {return false;}
    for(int y = 0; x > y;) {
        y = y * 10 + x % 10;
        if(!y) {return true;}
        if(x == y) {return true;}
        x /= 10;
        if(x == y) {return true;}
    }
    return false;
}
