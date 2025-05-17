int main() {
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Its is vowel");
        break;
        default:
        printf("It is consonants");
    }
    return 0;
}