#include <iostream>
using namespace std;
main(){
	for ( int r = 1; r <= 5 ; r++ ) {
		for ( int i = 1; i <= 5 - r; i++ ) {
			cout<<" ";
		}
		for ( int j = 1; j < 2 * r; j++ ) {
			if ( j == 1 || j == 2 * r - 1 || r == 5 ) {
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
