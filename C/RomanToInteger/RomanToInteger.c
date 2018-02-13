#include <stdio.h>
int romanToInt(char* s) {
    inline int RTInt(char ch) {
        switch(ch) {
            case 'I': return 1;
            case 'X': return 10;
            case 'C': return 100;
            case 'M': return 1000;
            case 'V': return 5;
            case 'L': return 50;
            case 'D': return 500;
        }
        return 0;
    }
    int i = strlen(s) - 1, j = 0, sum = RTInt(s[i]);
    for(j = i; j > 0; j--) {
        if(RTInt(s[j] < RTInt(s[j-1]))) {
            sum -= RTInt(s[j-1]);
        } else {
            sum += RTInt(s[j-1]);
        }
    }
    return sum;
}
