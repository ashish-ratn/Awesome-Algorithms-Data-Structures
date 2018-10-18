
// Java code to illustrate iterator() 
import java.util.*; 
  
public class ArrayDequeDemo { 
    public static void main(String args[]) 
    { 
        // Creating an empty ArrayDeque 
        Deque<String> de_que = new ArrayDeque<String>(); 
  
        // Use add() method to add elements into the Queue 
        de_que.add("Welcome"); 
        de_que.add("To"); 
        de_que.add("Geeks"); 
        de_que.add("4"); 
        de_que.add("Geeks"); 
  
        // Displaying the ArrayDeque 
        System.out.println("ArrayDeque: " + de_que); 
  
        // Creating an iterator 
        Iterator value = de_que.iterator(); 
  
        // Displaying the values after iterating through the Deque 
        System.out.println("The iterator values are: "); 
        while (value.hasNext()) { 
            System.out.println(value.next()); 
        } 
    } 
} 
