#include<bits/stdc++.h>

#define lld long long int
#define MAX 2

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);

	int n;
	string s;

	cin >> s;
	n = s.size();
	
	int cubeta[ MAX ][ MAX ]; // Representa cubeta[ letra ][ índice par/impar ];
	memset( cubeta, 0, sizeof( cubeta ) );
	
	lld par =  0, impar = 0, mask = 0;
	for( int i = 0; i < n; i++ ){
			mask = s[ i ]  - 'a'; 
			impar++;
			// Sabemos que indices [i, j] de un substring es par si i y j son de diferente paridad.
			if( ( i + 1 ) % 2 == 0 ){
				par += cubeta[ mask ][ 1 ];  //El actual es par y le sumamos los impares anteriores. Eso nos da una subcadena par.
				impar += cubeta[ mask ][ 0 ];  //El actual es par y le sumamos los pares anteriores. Eso nos da una subcadena impar.
				cubeta[ mask ][ 0 ]++;
				continue;
			}
			par += cubeta[ mask ][ 0 ];
			impar += cubeta[ mask ][ 1 ];
			cubeta[ mask ][ 1 ]++;
	}
	cout << par << " " << impar <<endl;
	return 0;
}