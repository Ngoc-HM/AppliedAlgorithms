#include <bits/stdc++.h>


typedef struct TreeNode {
    int id;
    struct TreeNode *firstChild, *nextSibling;
} TreeNode;

TreeNode* createNode(int id) {
    TreeNode* newNode = (TreeNode*) malloc(sizeof(TreeNode));
    newNode->id = id;
    newNode->firstChild = newNode->nextSibling = NULL;
    return newNode;
}
TreeNode *root = NULL;

void MakeRoot(int id) {
    if (root != NULL) {
        printf("Root already exists!\n");
        return;
    }
    root = createNode(id);
}

TreeNode* findNode(TreeNode *root, int id) {
    if (root == NULL) return NULL;
    if (root->id == id) return root;
    
    TreeNode *child = root->firstChild;
    while (child != NULL) {
        TreeNode *found = findNode(child, id);
        if (found != NULL) return found;
        child = child->nextSibling;
    }
    return NULL;
}

void Insert(int u, int v) {
    TreeNode *parent = findNode(root, v);
    if (parent == NULL || findNode(root, u) != NULL) {
        printf("Insertion failed!\n");
        return;
    }
    
    TreeNode *newNode = createNode(u);
    if (parent->firstChild == NULL) {
        parent->firstChild = newNode;
    } else {
        TreeNode *lastChild = parent->firstChild;
        while (lastChild->nextSibling != NULL) {
            lastChild = lastChild->nextSibling;
        }
        lastChild->nextSibling = newNode;
    }
}

void PreOrder(TreeNode *node) {
    if (node == NULL) return;
    printf("%d ", node->id);
    PreOrder(node->firstChild);
    PreOrder(node->nextSibling);
}

void InOrder(TreeNode *node) {
    if (node == NULL) return;
    if (node->firstChild != NULL) InOrder(node->firstChild);
    printf("%d ", node->id);
    TreeNode *sibling = node->firstChild;
    if (sibling != NULL) {
        while (sibling->nextSibling != NULL) {
            sibling = sibling->nextSibling;
            InOrder(sibling);
        }
    }
}

void PostOrder(TreeNode *node) {
    if (node == NULL) return;
    PostOrder(node->firstChild);
    printf("%d ", node->id);
    PostOrder(node->nextSibling);
}


int main() {
    char line[100];
    while (1) {
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = 0; // Remove newline character

        if (strcmp(line, "*") == 0) {
            break;
        }

        if (strncmp(line, "MakeRoot", 8) == 0) {
            int id;
            sscanf(line, "MakeRoot %d", &id);
            MakeRoot(id);
        } else if (strncmp(line, "Insert", 6) == 0) {
            int u, v;
            sscanf(line, "Insert %d %d", &u, &v);
            Insert(u, v);
        } else if (strcmp(line, "PreOrder") == 0) {
            PreOrder(root);
            printf("\n");
        } else if (strcmp(line, "InOrder ") == 0 || strcmp(line, "InOrder") == 0) {
            InOrder(root);
            printf("\n");
        } else if (strcmp(line, "PostOrder") == 0) {
            PostOrder(root);
            printf("\n");
        }
    }


    return 0;
}
