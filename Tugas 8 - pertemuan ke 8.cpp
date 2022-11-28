#include <iostream>

using namespace std;

int main(){
  int i, j, m, n,r,p, matriks[10][10],matriks2 [10][10],C [10][10], transpose[10][10];
  cout << "Progam Menghitung Matriks tugas 8 "<<endl;
  cout << "============================================\n";
  cout << " Daniel Agus Satrio \n 2210631170017\n 1C Informatika " << endl;
  cout << "============================================\n";
  cout << "Masukkan ordo matriks yang anda inginkan!"<<endl;
  cout << "Masukkan jumlah baris matriks: ";
  cin  >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin  >> n;

  cout << "============================\n";
  cout << "Masukkan elemen matriks A :\n";
  for (i = 0; i < m; i++){
  for (j = 0; j < n; j++){
  cout<<" elemen ["<<i+1<<","<<j+1<<"]: ";
  cin  >> matriks[i][j];
    }
  }

  cout << "============================\n";
  cout << "Masukkan elemen matriks B :\n";
  for (i = 0; i < m; i++){
  for (j = 0; j < n; j++){
  cout<<" elemen ["<<i+1<<","<<j+1<<"]: ";
  cin  >> matriks2[i][j];
    }
  }
  cout << "\nMatriks A = " << endl;
  for (i=0; i< m; i++){
  for (j=0; j< n; j++){
  cout << " " << matriks[i][j]<<"\t";
  if (j==n-1){
  cout << endl;
    }
  }
    }
  for (i = 0; i < m; i++){
  for (j = 0; j < n; j++){
  transpose[j][i] = matriks[i][j];
    }
  }

  cout << "Hasil Transpose Matriks A: \n";
  for (i = 0; i < n; i++){
  for (j = 0; j < m; j++){
  cout << " " <<transpose[i][j] << "\t";
    }
  cout << endl;
  }
  cout << "\nMatriks B = " << endl;
  for (i=0; i< m; i++){
  for (j=0; j< n; j++){
  cout << " " << matriks2[i][j] <<"\t";
  if (j==n-1){
  cout << endl;
   }
 }
   }
  for (i = 0; i < m; i++){
  for (j = 0; j < n; j++){
  transpose[j][i] = matriks2[i][j];
    }
  }

  cout << "Hasil Transpose Matriks B: \n";
  for (i = 0; i < n; i++){
  for (j = 0; j < m; j++){
  cout << " " <<transpose[i][j] << "\t";
    }
  cout << endl;
  }
  for (i=0;i<m;i++) for(j=0;j<n;j++)
  C[i][j]=matriks[i][j]+matriks2[i][j];
  cout<<"Matriks Hasil Penjumlahan:"<<endl;
  for (i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  cout<< " " <<C[i][j]<<"\t";
  cout<<endl;
   }
  cout<<"MATRIK : "<<endl;
  cout<<"Matriks A            Matriks B"<<endl;
  for (i=0;i<m;i++)
  {
  for (j=0;j<n;j++)
{
  cout<<matriks[i][j]<<"    ";
      }
  if (i==0)
    {
  cout<<"x";
  cout<<"    ";
  for (j=0;j<m;j++)
  {
  cout<<matriks2[i][j]<<"    ";
   }
    }
  if (i>0)
    {
  cout<<"    ";
  for (j=0;j<m;j++)
  cout<<" "<<matriks2[i][j]<<"   ";
 }
  cout<<endl;
    }
  C[i+1][j+1]=0;
  for (i=0;i<m;i++)
   {
  for (j=0;j<n;j++)
     {
  C[i+1][j+1]=0;
  for (r=0;r<n;r++)
  {
  C[i+1][j+1]=C[i+1][j+1]+matriks[i][r]*matriks2[r][j];
   }
}
   }
  cout<<endl<<"MATRIKS HASIL PERKALIAN = "<<endl;
  for (i=0;i<m;i++)
   {
  for (j=0;j<n;j++)
     {
  cout<<C[i+1][j+1]<<"     ";
     }
  cout<<endl;
   }


}

