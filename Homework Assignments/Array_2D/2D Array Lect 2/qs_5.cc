//predict the output

// #include<iostream>

// int main(){
//  int a[][2] = {{1,2},{3,4}};
//  int i, j;
//  for (i = 0; i < 2; i++)
//  for (j = 0; j < 2; j++)
//  cout << a[i][j];
//  return 0;
// // }

//Errror  as follows:
// qs_5.cc: In function 'int main()':
// qs_5.cc:10:2: error: 'cout' was not declared in this scope
//   cout << a[i][j];
//   ^~~~
// qs_5.cc:10:2: note: suggested alternative:
// In file included from qs_5.cc:3:0:
// c:\mingw\lib\gcc\mingw32\6.3.0\include\c++\iostream:61:18: note:   'std::cout'
//    extern ostream cout;  /// Linked to standard output
//                   ^~~~