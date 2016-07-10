# repeating-num
private static int largestNumber(int data) {
    int num = data;
    int[] times = new int[10];
    while (num != 0) {
        if (num == 0) {
            break;
        }
        int val = num % 10;
        times[val]++;
        num /= 10;
    }
    String largestNumber = "";
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < times[i]; j++) {
            largestNumber += i;
        }
    }
    return Integer.parseInt(largestNumber);
}
   
