#include <iostream>
using namespace std;
main(){
	int qtde_linha;
	cout<<"Digite um numero: ";
	cin>>qtde_linha;
	
	for( int linha_atual = 1; linha_atual <= qtde_linha ; linha_atual++ ){
		for( int espaco = 1; espaco <= qtde_linha - linha_atual ; espaco++ ) {
			cout<<" ";
		}
		for ( int estrela = 1; estrela <= 2 * linha_atual -1 ; estrela++ ){
			cout<<"*";
		}
		cout<<endl;
	}
	
	for ( int linha_atual = qtde_linha - 1; linha_atual >= 1 ; linha_atual-- ) {
		for ( int espaco = 1; espaco <= qtde_linha - linha_atual; espaco++ ) {
			cout<<" ";
		}
		for ( int estrela = 2 * linha_atual - 1 ; estrela >= 1 ; estrela--) {
			cout<<"*";
		}
		cout<<endl;
	}
}


