#ifndef PARSER_H
#include <stdlib.h>

typedef struct {
    Token       token;
    struct Node *left;
    struct Node *right;
} SyntaxNode;
#endif
