#include <iostream>

using namespace std;


int main(){
    //mencoba membuat deret fibbonaci
    cout << "--- deret fibbonaci ---" << endl;
    int fb_end = 0; // end number of fibbonaci sequence, move to next every loop
    int fb_first = 1; // first number, move to end number every loop
    int fb_mid; //mid number for excange value

    int fb_target; //target fibbonaci (n) sequence
    cout << "masukan baris yg ingin dicari : ";
    // cin>>fb_target;
    fb_target = 10;
    cout << fb_target << endl;

    for(int i = 0; i <= fb_target ; i++){
        fb_mid = fb_end; 
        fb_end = fb_end + fb_first; 
        fb_first = fb_mid; //excange value
        cout << i << " | -> | " << fb_end <<endl;
    }



    //membuat segitiga
    cout << "\n\n--- segitiga ---\n" << endl;
    int tri = 5;
    for(int i = 0; i < tri; i ++){
        for(int j = 0; j <=i; j++){
            cout << "# ";;
        }
        cout << endl;
    }

    //segitiga terbalik
    cout << "\n\n--- segitiga terbalik sumbu x ---\n" << endl;
    tri = 5;
    for(int i = 0; i < tri; i++){
        for(int j = 0; j < tri - i-1; j++){
            cout << ". ";
        }
        for(int j = 0; j <= i; j++){
            cout << "# ";
        }

        cout << endl;
    }

    //segitiga terbalik
    cout << "\n\n--- segitiga terbalik sumbu xy ---\n" << endl;
    tri = 5;
    for(int i = 0; i < tri; i++){
        for(int j = 0; j <i; j++){
            cout << ". ";;
        }
        for(int j = 0; j < tri - i; j++){
            cout << "# ";
        }
        cout << endl;
    }

    //segitiga terbalik
    cout << "\n\n--- segitiga terbalik sumbu y ---\n" << endl;
    tri = 5;
    for(int i = 0; i < tri; i++){
        for(int j = 0; j < tri - i; j++){
            cout << "# ";
        }
        for(int j = 0; j <i; j++){
            cout << ". ";;
        }
        cout << endl;
    }

    //segitiga sama kaki
    cout << "\n\n--- segitiga sama kaki ---\n" << endl;
    tri = 5;
    for(int i = 0; i < tri; i++){
        for(int j = 0; j <tri - 1 - i; j++){
            cout << ".";
        }
        for(int j = 0; j <= i; j++){
            cout << "# ";
        }
        cout << endl;
    }

        //segitiga sama kaki terbalik
    cout << "\n\n--- segitiga sama kaki terbalik ---\n" << endl;
    tri = 5;
    for(int i = 0; i < tri; i++){
        for(int j = 0; j < i; j++){
            cout << ".";
        }
        for(int j = 0; j < tri - i; j++){
            cout << "# ";
        }
        
        cout << endl;
    }

    cout << "\n\n--- diamon ---\n" << endl;
    tri = 5;
    for(int i = 0; i < tri; i++){
        for(int j = 0; j <tri - 1 - i; j++){
            cout << ".";
        }
        for(int j = 0; j <= i; j++){
            cout << "# ";
        }
        cout << endl;
    }
    tri -= 1;
    for(int i = 0; i < tri; i++){
        for(int j = 0; j <= i; j++){
            cout << ".";
        }
        for(int j = 0; j < tri - i; j++){
            cout << "# ";
        }
        
        cout << endl;
    }

    return 0;
}