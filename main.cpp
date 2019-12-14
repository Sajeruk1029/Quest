#include <iostream>

using namespace std;

int main()
{
   int **matrix;
   int *mass;
   int count, count2, rez, M, N;

   srand(time(0));

   cout << "Введите количество столбцов матрицы..." << endl;
   cin >> M;

   if(!M)
   {
       cout << "Введено не число!" << endl;
       return 0;
   }

   cout << "Введите количество строк матрицы..." << endl;
   cin >> N;

   if(!N)
   {
       cout << "Введено не число!" << endl;
       return 0;
   }

   cout << endl;

   matrix = new int*[M];

   for(count = 0; count < M; count++)
   {
        matrix[count] = new int [N];
   }

   mass = new int [M];

   for(count = 0; count < M; count++)
   {
       for(count2 = 0; count2 < N; count2++)
       {

           matrix[count][count2] = rand() % 201;

       }
   }

   for(count = 0; count < M; count++)
   {
       for(count2 = 0; count2 < N; count2++)
       {
           cout << matrix[count][count2] << endl;
       }
       cout << endl;
   }

   for(count = 0; count < M; count++)
   {
       rez = matrix[count][0];
       mass[count] = rez;

       for(count2 = 0; count2 < N; count2++)
       {
           if(rez < matrix[count][count2])
           {
               rez = matrix[count][count2];
               mass[count] = rez;
           }
       }
   }

   cout << endl;

   for(count = 0; count < M; count++)
   {
        cout << mass[count] << endl;
   }

   delete [] matrix;
   delete [] mass;
}
