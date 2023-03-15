// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int left_border = 0, right_border = size - 1, mid = 0;
  while (left_border <= right_border) {
    mid = (right_border + left_border) / 2;
    if (arr[mid] < value) {
      left_border = mid + 1;
    } else if (arr[mid] > value) {
      right_border = mid - 1;
    } else {
      break;
    }
  }
  int temp = mid;
  while (arr[mid] == value) {
    count++;
    mid++;
  }
  mid = temp - 1;
  while (arr[mid] == value) {
    count++;
    mid--;
  }
  return count;
}
