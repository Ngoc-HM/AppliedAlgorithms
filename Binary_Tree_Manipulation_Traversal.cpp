#include <bits/stdc++.h>

typedef struct node {
  int id;
  struct node* left; 
  struct node* right;
} Node;

Node* root = NULL;

void MakeRoot(int u) {
  Node* p = (Node*) malloc(sizeof(Node));
  p->id = u;
  p->left = NULL;
  p->right = NULL;
  root = p;
}

Node* find(Node* r, int u) {
  if (!r) return NULL;
  if (r->id == u) return r;
  Node* tmp = find(r->left, u); 
  if (tmp) return tmp;
  return find(r->right, u);
}

void AddLeft(int u, int v) {
  Node* p = find(root, v);
  if (!p || p->left) return;
  
  Node* q = (Node*) malloc(sizeof(Node));
  q->id = u;
  q->left = NULL;
  q->right = NULL;
  p->left = q;  
}

void AddRight(int u, int v) {
  // Tìm node có id = v trong cây
  Node* p = find(root, v);  
  // Nếu không tìm thấy hoặc node đó đã có con phải rồi thì thoát
  if (!p || p->right) return;
  // Tạo node mới có id = u  
  Node* q = (Node*) malloc(sizeof(Node));
  q->id = u;
  q->left = NULL;
  q->right = NULL;
  // Gán node q vừa tạo làm con phải của node p
  p->right = q;

}

void PreOrder(Node* r) {
  if (!r) return;
  printf("%d ", r->id);
  PreOrder(r->left);  
  PreOrder(r->right);
}

void InOrder(Node* r) {
  if (!r) return;
  InOrder(r->left);
  printf("%d ", r->id);
  InOrder(r->right);  
} 

void PostOrder(Node* r) {
  if (!r) return;
  PostOrder(r->left);
  PostOrder(r->right);
  printf("%d ", r->id);
}

int main() {
  char s[20];
  
  scanf("%s", &s);
  while (strcmp(s, "*")) {
    if (!strcmp(s, "MakeRoot")) {
      int u;
      scanf("%d", &u);
      MakeRoot(u);
    }
    else if (!strcmp(s, "AddLeft")) {
      int u, v;
      scanf("%d%d", &u, &v);
      AddLeft(u, v); 
    }
    else if (!strcmp(s, "AddRight")) {
      int u, v;
      scanf("%d%d", &u, &v);
      AddRight(u, v);
    } 
    else if (!strcmp(s, "PreOrder")) {
      PreOrder(root);
      printf("\n");
    }
    else if (!strcmp(s, "InOrder")) {
      InOrder(root);
      printf("\n"); 
    }
    else if (!strcmp(s, "PostOrder")) {
      PostOrder(root);
      printf("\n");
    }
    
    scanf("%s", &s); 
  }
  
  return 0;
}
