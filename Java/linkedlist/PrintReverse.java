package linkedlist;

public class PrintReverse {
	
	public static void printReverse(Node<Integer> head) {
		if(head == null || head.next == null) {
			return;
		}
		
		printReverse(head.next);
		System.out.print(head.data + "->");
	}
	
	public static Node<Integer> reverseR2(Node<Integer> head) {
		
		if(head == null || head.next == null) {
			return head;
		}
		
		Node<Integer> smallHead = reverseR2(head.next);
		head.next.next = head;
		head.next = null;
		
		return smallHead;
	}
	
	public static Node<Integer> reverseR(Node<Integer> head) {
		if(head == null || head.next == null) {
			return head;
		}
		Node<Integer> smallHead = reverseR(head.next);
		Node<Integer> tail = smallHead;
		while(tail.next != null) {
			tail = tail.next;
		}
		tail.next = head;
		head.next = null;
		return smallHead;
	}
	
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

	public static void main(String[] args) {
		Node<Integer> head = linkedlist.LinkedListUse.takeInput2();
		head = reverseR(head);
//		printReverse(head);
		linkedlist.LinkedListUse.print(head);
	}

}
