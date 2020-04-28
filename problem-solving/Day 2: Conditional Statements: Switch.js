function getLetter(s) {
    let letter;
    // Write your code here
    var co = s[0];
    switch(co){

    
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
         letter = 'A';
         return letter;
         break;
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
        letter = 'B';
        return letter;
        break;
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
        letter = 'C';
        return letter;
        break;
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        letter = 'D';
        return letter;
        break;
    
    

    
    
    return letter;


    }
}
