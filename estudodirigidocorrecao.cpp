#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){

    cout << fixed << setprecision(2);

    vector<int>numbers = {};

    string parar;
    int num,soma,i,a;
    double media;

    do{
        cout << "Digite um numero: "<< endl;
        cin >> a;
        numbers.push_back(a);
        cout << "Quer continuar digitando? (S para continuar, N para parar): " << endl;
        cin >> parar;

    }while(parar != "N");


    cout << "Os elementos do vetor sao: ";
    for ( i = 0; i < numbers.size(); i++)
        cout << "{" << numbers[i] << "}" << endl;


  cout << endl<< "~~~~~~~~~~~~~~~~~~~~~";
  cout << endl << "Digite 1: Imprimir o somatório de seus elementos." << endl <<  "Digite 2: Imprimir a média de seus elementos."<< endl << "Digite 3: Imprimir a média e o somatório." << endl << "Digite 4: Substituir por zero todos os valores negativos e imprimir a média." << endl << ""
"Digite 5: Substituir por zero todos os valores repetidos e imprimir a média e o somatrio." << endl << "Digite 6: mostrar o vetor ordenado." << endl << "0 : Sair da aplicação." << endl ;

  cin >> num ;

  while(num != 0){

        ////////////////////////////////////////////////////////////////////////////////////////////////////

        if ( num == 1) {
             soma = 0;
             i = 0;


            while( i < numbers.size()) {
                soma = soma + numbers[i];
                i = i + 1;
            }

            cout << " A soma é: " << soma << endl;

        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////

        if (num == 2) {

             soma  = 0;
             media = 0;
             i = 0;


            while( i < numbers.size()) {
                soma = soma + numbers[i];
                i = i + 1;
            }

            media = soma / numbers.size();
            cout << " A média é: " << media << endl;
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////

        if ( num == 3){

             soma = 0;
             i = 0;


            while( i < numbers.size()) {
                soma = soma + numbers[i];
                i = i + 1;
            }

            media = soma / numbers.size();
            cout << "A soma é: "  << soma << " ,e a média é:" << media << endl;
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////
        if( num == 4){

           for ( i = 0; i < numbers.size(); i++ ) {
               if ( numbers[i] < 0) {
                 numbers[i] =  0;
               }
            }

             soma = 0;
             i = 0;


            while( i < numbers.size()) {
                soma = soma + numbers[i];
                i = i + 1;
            }

            media = soma / numbers.size();
            cout <<" A média é: " << media << endl;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////
        if(num == 5){

            sort(numbers.begin(),numbers.end());

            for (i = 0; i< numbers.size() -1; i++){

                if (numbers[i] == numbers[i+1]){
                    numbers[i] = 0;
                }
            }

             soma = 0;
             i = 0;


            while( i < numbers.size()) {
                soma = soma + numbers[i];
                i = i + 1;
            }

            media = soma / numbers.size();
            cout << "A soma é: "  << soma << " ,e a média é: " << media << endl;
        }


        //////////////////////////////////////////////////////////////////////////////////////////////////
        if( num == 6){

            sort(numbers.begin(),numbers.end());
            cout << endl <<  "Os elementos do vetor sao: " << endl;

            for ( i = 0; i < numbers.size(); i++)
                cout << endl << "{" << numbers[i] << "}" << ""  << endl;


        } //FIM DO IF

        cout << endl<< "******************************************" << endl;
        cout << endl << "Digite 1: Imprimir o somatório de seus elementos." << endl <<  "Digite 2: Imprimir a média de seus elementos."<< endl << "Digite 3: Imprimir a média e o somatório." << endl << "Digite 4: Substituir por zero todos os valores negativos e imprimir a média." << endl << "" "Digite 5: Substituir por zero todos os valores repetidos e imprimir a média e o somatrio." << endl << "Digite 6: mostrar o vetor ordenado." << endl << "0 : Sair da aplicação." << endl ;

        cin >> num ;


    } //FIM DO WHILE num != 0



    return 0;
}
