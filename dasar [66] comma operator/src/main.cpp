#include <array>
#include <iostream>
#include <string>


using namespace std;

//** comma operator **
//comma operator digunakan supaya dapat menjalankan lebih dari 1 expression dalam sebuah blok kurung "()".
//jadi expression yg ada didalam tanda kurung tadi dapat diassign kesebuah variabel.
//dan yg dimasukan adalah value dari expression terakhir.
//sintaksnya sepertinya seperti ini

//(expression_1, expression_2, expression_3)

//!! ingat !!
// + expression yang dapat diassign hanya expression yang mereturn tipe data yang sama
// + koma disi berbeda dengan koma yg digunakna pada array, parameter arhument shorthand datatype dll
int main(){
    int a;
    int b;
    int c;

    // a = (b = 1, c = 2, (b + c)); // nilai a akan bernilai 3, karena diassign dari b + c
    // a = (b = 1, c = 2, (b + c), cout << "nilai b : " << b); //ini tidak akan bisa karena iostram tdak bisa diassign ke int
    a = (b = 1, cout << "b : " << b << "\n", c = 2, cout << "c : " << c << "\n", (b+c)); //kalau ini sudah bisa, kanera yg paling akhir mereturn int

    cout << "nilai a : " << a << endl;

}
