package linkedlist;

public class PalindromeLinkedlist {
	
	public static Node<Integer> reverseLinkedList(Node<Integer> head) {
		Node<Integer> curr = head;
		Node<Integer> prev = null;
		Node<Integer> fwd = null;
		
		while(curr != null) {
			fwd = curr.next;
			curr.next = prev;
			prev = curr;
			curr = fwd;
		}
		
		return prev;
	}
	
	public static boolean isPalindrome(Node<Integer> head) {
		if(head == null || head.next == null) {
			return true;
		}
		
		// find list center
		Node<Integer> fast = head;
		Node<Integer> slow = head;
		
		while(fast.next != null && fast.next.next != null) {
			fast = fast.next.next;
			slow = slow.next;
		}
		
		Node<Integer> secondHead = slow.next;
		slow.next = null;
		secondHead = reverseLinkedList(secondHead);
		
		// compare two sublists now
		Node<Integer> firstSubList = secondHead;
		Node<Integer> secondSubList = head;
		
		while(firstSubList != null) {
			if(firstSubList.data != secondSubList.data) {
				return false;
			}
			
			firstSubList = firstSubList.next;
			secondSubList = secondSubList.next;
		}
		
		//Rejoin the two sublists to restore the input list to its original form
		firstSubList = head;
		secondSubList = reverseLinkedList(secondHead);
		
		while(firstSubList.next != null) {
			firstSubList = firstSubList.next;
		}
		
		firstSubList.next = secondSubList;
		
		return true;
	}
	
	public static void main(String[] args) {
		Node<Integer> head = linkedlist.LinkedListUse.takeInput2();
		boolean output = isPalindrome(head);
		System.out.println("The output is: " + output);
	}
	// I don't understand this problem
}
