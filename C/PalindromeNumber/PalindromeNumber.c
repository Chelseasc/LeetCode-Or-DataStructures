#include <stdio.h>
bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }
    if(!x) {
        return true;
    }
    for(int y = 0; x > y;) {
        y = y * 10 + x % 10;
        if(!y) {return false;}
        if(x == y) {
            return true;
        }
        x /= 10;
        if(x == y) {return true;}
    }
    return false;
}
