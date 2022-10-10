#include <iostream>
using namespace std;

int x = 10; // variabel global

int ambil_global(){
	return x; // mengambil variabel global
}

int x_local(){
	int x = 5; // variabel local scopenya x_local()
    //hanya akan bisa diakses oleh fungsi ini
    //sepertinay tidak bisa mengambil varibel scope fungsi ini dipanggil
	return x;
}

int main(){

	cout << "1. variabel global : " << x << endl;
	int x = 8; // variabel local untuk main
	cout << "2. variabel local main : " << x << endl;
	cout << "3. variabel ambil_global : " << ambil_global() << endl;
	cout << "4. variabel local main : " << x << endl;
	cout << "5. variabel x_local : " << x_local() << endl; //memanggil function dengan varibel scopenya
	cout << "6. variabel local main : " << x << endl;

	cout << "7. variabel local main : " << x << endl; 

    //contoh untuk block scope
    //ditandai dengan adanya kurawal awal - akhir
	{
		cout << "8. variabel local main : " << x << endl; 	
		// block scope
		int x = 1;
		cout << "9. variabel local block : " << x << endl; 	
		cout << "10. variabel global : " << ::x << endl; //mengambil variabel yg paling ujung sendiri (global)
	}
	cout << "11. variabel local main : " << x << endl; 	

    //untuk pengetesan

    {
        int x = 1;
        {
            int x = 2;
            {
                int x = 3;
                cout << "contoh eksperimen "<< x <<endl;
            }
        }
    }

	cin.get();
	return 0;
}