class BinarySearch {
  public static int binary_search(int[] list, int item) {
    int low = 0, high = list.length - 1;
    while (low <= high) {
      int mid = (low + high) / 2;
      int guess = list[mid];
      if (guess == item)
        return mid;
      else if (guess > item)
        high = mid - 1;
      else
        low = mid + 1;
    }
    return -1;
  }

  public static void main(String[] args) {
    int[] list = new int[51];
    for (int i = 0; i <= 50; i++)
      list[i] = i * 2;
    System.out.println(binary_search(list, 32));
    System.out.println(binary_search(list, 31));
  }
}