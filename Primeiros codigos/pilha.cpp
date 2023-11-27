#include <iostream>
 #include <string>
 
 using namespace std;
 
class No{
	
	private:
	No* proximo;
	int dado;

	
	public:
	No();
	void entrar(int n);
	void mostrar();
	int sair();
	int tamanho();
	
	};
	No::No(){
		proximo=NULL;
		dado=0;
		}
	void No::entrar(int n){
		No* prox;
		No* novo;
		novo=(No*)malloc(sizeof(No));
		novo->dado=n;
		novo->proximo=NULL;
		
		if (!proximo){
			proximo=novo;
		}
		
		else{
			prox=proximo;
			while(prox->proximo){
			prox=prox->proximo;
			}
		prox->proximo=novo;
		}
	}
		
	int No::tamanho(){
		No* prox;
		int i=0;
		prox=proximo;
		while(prox){
			i++;
			prox=prox->proximo;
		}
		return i;
	}
	void No::mostrar(){
		No* prox;

		cout<<"---Mostrando Fila----\n";

		int tam=tamanho();
		if (tam>0){
			prox=proximo;
			while(prox){
				cout<<prox->dado;
				cout<<" # ";
				prox=prox->proximo;
			}
			cout<<"\n";
		}
		cout<<"Tamanho = "<<tam<<"\n---------------------\n\n";
	}
	int No::sair(){
		No* prox;
		No* anterior;
		prox=proximo;
		anterior=this;
		int tam=tamanho();
		if (tam>0){
			while(prox->proximo){
				anterior=prox;
				prox=prox->proximo;
			}
		int n=prox->dado;
		anterior->proximo=NULL;
		free(prox);
		return n;}
		else{
			throw std::runtime_error(std::string("Pilha Vazia") );
		}
	}
int main(int argc, char **argv)
{
	No pilha;

	pilha.mostrar();
	for (int i=0; i<8 ;i++) pilha.entrar(i);

	pilha.mostrar();
	cout<<pilha.sair()<<"\n";
	cout<<pilha.sair()<<"\n";
	cout<<pilha.sair()<<"\n";
	cout<<pilha.sair()<<"\n";
	cout<<pilha.sair()<<"\n";
	
	pilha.mostrar();
	cout<<pilha.sair()<<"\n";
	cout<<pilha.sair()<<"\n";
	cout<<pilha.sair()<<"\n";
	
	pilha.mostrar();
	cout<<pilha.sair()<<"\n";
	cout<<pilha.sair()<<"\n";
	pilha.mostrar();
	return 0;
}
