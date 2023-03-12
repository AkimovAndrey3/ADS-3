// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int right = size - 1;
  int k = 0;
  int mid= 0;
  int mid2 = 0;
  while (right >= left) {
    mid = (right + left) / 2;
    if (arr[mid] == value) {
      k++;
      mid2 = mid;
      while (arr[mid + 1] == value) {
        k++;
        mid++;
      }
      while (arr[mid2 - 1] == value) {
        k++;
        mid2--;
      }
      return k;
    } else if (value < arr[mid]) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return k;
}
