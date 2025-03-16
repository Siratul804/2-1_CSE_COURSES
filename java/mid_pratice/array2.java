public class ArrayComparisonFixed {

    public static void main(String[] args) {
        int[] array1 = {1, 3, 6, 2};
        int[] array2 = {2, 3, 4, 5};
        int size = array1.length;

        int[] array3 = new int[size];

        for (int i = 0; i < size; i++) {
            int count = 0;
            for (int j = 0; j < size; j++) {
                if (array2[j] > array1[i]) {
                    count++;
                }
            }
            array3[i] = count;
        }

        System.out.println("Third array (counts):");
        for (int i = 0; i < size; i++) {
            System.out.print(array3[i] + " ");
        }
        System.out.println();
    }
}