import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class ListADT {
    private List<Integer> array;

    public ListADT() {
        array = new ArrayList<>();
    }

    public void append(int x) {
        array.add(x);
    }

    public void extend(List<Integer> iterable) {
        array.addAll(iterable);
    }

    public void insert(int index, int x) {
        if (index < 0 || index > array.size())
            return;  
        array.add(index, x);
    }

    public void remove(int x) {
        array.remove(Integer.valueOf(x));
    }

    public int pop(int index) {
        if (index < 0 || index >= array.size())
            return -1;  
        return array.remove(index);
    }

    public void clear() {
        array.clear();
    }

    public int index(int x, int start, int end) {
        if (start < 0)
            start = 0;
        if (end > array.size())
            end = array.size();
        return array.subList(start, end).indexOf(x);
    }

    public int count(int x) {
        return Collections.frequency(array, x);
    }

    public void sort(boolean reverse) {
        if (reverse)
            Collections.sort(array, Collections.reverseOrder());
        else
            Collections.sort(array);
    }

    public void reverse() {
        Collections.reverse(array);
    }

    public List<Integer> copy() {
        return new ArrayList<>(array);
    }

    public void print() {
        System.out.print("[");
        for (int i = 0; i < array.size(); i++) {
            System.out.print(array.get(i));
            if (i != array.size() - 1)
                System.out.print(", ");
        }
        System.out.println("]");
    }

    public static void main(String[] args) {
        ListADT myList = new ListADT();
        myList.append(1);
        myList.append(2);
        myList.append(3);
        myList.append(4);
        System.out.print("Original List: ");
        myList.print();
        myList.insert(2, 10);
        System.out.print("After Insertion: ");
        myList.print();
        myList.remove(3);
        System.out.print("After Removal: ");
        myList.print();
        System.out.println("Popped: " + myList.pop(1));
        System.out.print("After Pop: ");
        myList.print();
        myList.sort(false);
        System.out.print("After Sorting: ");
        myList.print();
        myList.reverse();
        System.out.print("After Reversing: ");
        myList.print();
        List<Integer> copiedList = myList.copy();
        System.out.print("Copied List: ");
        for (int num : copiedList)
            System.out.print(num + " ");
        System.out.println();
        myList.clear();
        System.out.print("After Clearing: ");
        myList.print();
    }
}
