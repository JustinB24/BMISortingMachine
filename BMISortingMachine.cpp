#include<stdio.h>

struct BMI{
  int ID;
  char name[25];
  double foot;
  double inch;
  double cm;
}data[50005];
void merge(BMI arr[], int p, int q, int r) {

  int n1 = q - p + 1;
  int n2 = r - q;
  BMI L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i].cm > M[j].cm) {
      arr[k] = L[i];
      i++;
    }
    else if(L[i].cm == M[j].cm){
      if (L[i].ID < M[j].ID) {
        arr[k] = L[i];
        i++;
      }
      else {
        arr[k] = M[j];
        j++;
      }
    }
    else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(BMI arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}
int main(){
  int n;
  scanf("%d", &n); getchar();
  for (int i = 0;i < n;i++){
    scanf("%d,%[^,],%lf %lf", &data[i].ID, data[i].name, &data[i].foot, &data[i].inch);
     data[i].cm = (data[i].inch + (data[i].foot * 12)) * 2.54;
  }
  mergeSort(data, 0, n - 1);

  int m;
  scanf("%d", &m);
  double cmMin = data[n - 1].cm;
  double x;
  for (int i = 0;i < m;i++){
    scanf("%lf", &x);
    printf("Q%d:\n", i + 1);
    if (x < cmMin){
      puts("-1");
    }
    else{
      for (int j = 0;j < n;j++){
        if (x >= data[j].cm){
          printf("%d %s %.2lf\n", data[j].ID, data[j].name, data[j].cm);
        }
      }
    }
  }
  return 0;
}
