#include <iostream>
using namespace std;

struct NoArvore {
    int data;
    NoArvore* esquerda;
    NoArvore* direita;
};

NoArvore* encontrarMaiorNo(NoArvore* raiz) {

    while (raiz != NULL && raiz->direita != NULL) {
        raiz = raiz->direita;
    }

    return raiz;
}

int main() {

    NoArvore *raiz = new NoArvore;
    raiz -> data = 100;
    raiz -> esquerda = NULL;
    raiz -> direita = NULL;
        
    NoArvore *elementoEsquerda = new NoArvore;
    elementoEsquerda -> data = 20;
    elementoEsquerda -> esquerda = NULL;
    elementoEsquerda -> direita = NULL;
    
    raiz->esquerda = elementoEsquerda;
    
    NoArvore *elementoEsquerda2 = new NoArvore;
    elementoEsquerda2 -> data = 10;
    elementoEsquerda2-> esquerda = NULL;
    elementoEsquerda2-> direita = NULL;
    
    elementoEsquerda -> esquerda = elementoEsquerda2;

    NoArvore *elementoDireita = new NoArvore;
    elementoDireita -> data = 500;
    elementoDireita -> esquerda = NULL;
    elementoDireita -> direita = NULL;
    
    raiz -> direita = elementoDireita;
    
    NoArvore *elementoDireita2 = new NoArvore;
    elementoDireita2 -> data = 30;
    elementoDireita2-> esquerda = NULL;
    elementoDireita2-> direita = NULL;
    
    elementoEsquerda -> direita = elementoDireita2;


    NoArvore* maiorNo = encontrarMaiorNo(raiz);


    if (maiorNo != NULL) {
        cout << "Maior no da arvore: " << maiorNo->data << endl;
    } else {
        cout << "Vazia" << endl;
    }


    return 0;
}

