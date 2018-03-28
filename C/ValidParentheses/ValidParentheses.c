bool isValid(char* s) {
    int len = strlen(s);
    if(len%2 != 0) return false;
    int lim = len/2;
    char * stack = malloc(lim);
    int index = 0;
    char strpre, strlas;
    for(int i = 0; i < len; ++i) {
        strpre = s[i];
        if(strpre == "(" || strpre == "{" || strpre == "[") {
            if(index == lim) {
                return false;
            } else {
                stack[index++] = strpre;
            }
        } else {
            if(index == 0) return false;
            strlas = stack[i-1];
            if((strlas == "(" && strpre == ")")|| (strlas == "{" && strpre == "}")|| (strlas == "[" && strpre == "]")) {
                index--;
            }
        }

    }
    return index == 0;
}
