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
		int tam=tamanho();
		if (tam>0){
		int n=proximo->dado;
		prox=proximo;
		proximo=prox->proximo;
		free(prox);
		return n;}
		else{
			throw std::runtime_error(std::string("Fila Vazia") );
		}
	}
int main(int argc, char **argv)
{
	No fila;

	fila.mostrar();
	for (int i=0; i<8 ;i++) fila.entrar(i);

	fila.mostrar();
	cout<<fila.sair()<<"\n";
	fila.mostrar();
	
	
	return 0;
}
