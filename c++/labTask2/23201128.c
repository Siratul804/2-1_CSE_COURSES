#include <stdio.h>

int precedence(char operator) {
    if (operator == '+' || operator == '-') return 1;
    if (operator == '*' || operator == '/') return 2;
    if (operator == '^') return 3;
    return 0; 
}

void infixToPostfix(char infix[], char postfix[]) {
    char stack[100];
    int top = -1, postfixIndex = 0, infixIndex = 0;

    while (infix[infixIndex] != '\0') {
        char currentChar = infix[infixIndex];
        
        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z') || (currentChar >= '0' && currentChar <= '9')) {
            postfix[postfixIndex++] = currentChar;
        } else if (currentChar == '(') {
            stack[++top] = currentChar;
        } else if (currentChar == ')') {
            while (top >= 0 && stack[top] != '(') {
                postfix[postfixIndex++] = stack[top--];
            }
            if (top >= 0) top--; 
        } else {
            while (top >= 0 && stack[top] != '(' && precedence(stack[top]) >= precedence(currentChar)) {
                postfix[postfixIndex++] = stack[top--];
            }
            stack[++top] = currentChar;
        }
        infixIndex++;
    }

    while (top >= 0) {
        postfix[postfixIndex++] = stack[top--];
    }
    postfix[postfixIndex] = '\0'; 
}

int main() {
    char infix[100], postfix[100];
    
    printf("Enter infix expression: ");
    scanf("%s", infix);
    
    infixToPostfix(infix, postfix);
    
    printf("Postfix expression: %s\n", postfix);
    
    return 0;
}