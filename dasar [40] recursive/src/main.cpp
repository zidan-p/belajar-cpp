#include <iostream>

using namespace std;

/*
---- function recursive ---
function recursive adalah function yg dijalanakan berulang2 berurutan.

function yg berisi looping juga termasuk dalam function recursive.
tapi dalam konteks ini, function recursive adalah sebuah function yg memanggil 
dirinya sendiri, sehinga functiion tersebut akan menjalankan function tersebut
hingga menjalankan perintan return.
apabial tidak ada return statement, maka function tersebut akan terus berulang hingga
error.


*/

//contoh dibawah yaitu function recursive untuk mencari factorial
int factorial(int num){
	cout << "num : " << num << "\n";
	if(num <= 1)return num;
	return num * factorial(num-1);
}

int main(){
	cout << " ---- contoh menggunakan factorial -------\n";
	cout<< "hasil => \n" <<factorial(5) << "\n";
	
}
















