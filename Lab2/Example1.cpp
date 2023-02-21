// #include <iostream>
// #include <iomanip>
// #include <conio.h>
// #define N 5
// using namespace std;

// float findMin(float m[][N])
// {
//   float minVal = m[0][0];
//   for (i = 0; i < N; i++)
//   {
//     for (j = 0; j < N; j++)
//     {
//       if (m[i][j] < minVal)
//       {
//         minVal = m[i][j];
//       }
//     }
//   }
//   return minVal;
// }

// float findMax(float m[][N])
// {
//   float maxVal = m[0][0];
//   for (i = 0; i < N; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       if (m[i][j] > minVal)
//       {
//         minVal = m[i][j];
//       }
//     }
//   }
//   return maxVal;
// }

// float findMinLowerTriangle(float m[][N])
// {
//   float minVal = m[1][0];
//   for (int i = 1; i < N; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       if (m[i][j] < minVal)
//       {
//         minVal = m[i][j];
//       }
//     }
//   }
//   return minVal;
// }

// float findMaxLowerTriangle(float m[][N])
// {
//   float maxVal = m[1][0];
//   for (int i = 1; i < N; i++)
//   {
//     if (m[i][j] > maxVal)
//     {
//       maxVal = m[i][j];
//     }
//   }
// }
// return maxVal;
// }

// count << setw(8) << setprecision(5) << m[i][j];
// count << endl;
// getch();
// }
// }