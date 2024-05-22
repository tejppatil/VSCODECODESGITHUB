
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct Stack {
    int top;
    char* items;
};
struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->items = (char*)malloc(capacity * sizeof(char));
    return stack;
}
bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
void push(struct Stack* stack, char item) {
    stack->items[++stack->top] = item;
}
char pop(struct Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top--];
    }
    return '\0'; // Empty stack
}
bool areBracketsBalanced(char* expression) {
    struct Stack* stack = createStack(strlen(expression));

    for (int i = 0; expression[i]; i++) {
        char currentChar = expression[i];
        if (currentChar == '(' || currentChar == '[' || currentChar == '{') {
            push(stack, currentChar);
        } else if (currentChar == ')' || currentChar == ']' || currentChar == '}') {
            if (isEmpty(stack)) {
                return false;
            }
            char topChar = pop(stack);
            if ((currentChar == ')' && topChar != '(') ||
                (currentChar == ']' && topChar != '[') ||
                (currentChar == '}' && topChar != '{')) {
                return false;
            }
        }
    }

    return isEmpty(stack);
}

int main() {
    char expression[100];
    printf("Enter an expression with brackets: ");
    scanf("%s", expression);

    if (areBracketsBalanced(expression)) {
        printf("The expression is balanced.\n");
    } else {
        printf("The expression is not balanced.\n");
    }

    return 0;
}
