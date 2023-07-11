package linkedlist;

public class AppendLastNToFirst {
	
	public static Node<Integer> appendLastNtoFirst(Node<Integer> head, int n) {
		if(head == null || n == 0) {
			return head;
		}
		
		Node<Integer> fast = head;
		Node<Integer> slow = head;
		Node<Integer> initialhead = head;
		
		for(int i = 0; i < n; i++) {
			fast = fast.next;
		}
		
		while(fast.next != null) {
			slow = slow.next;
			fast = fast.next;
		}
		
		Node<Integer> temp = slow.next;
		slow.next = null;
		fast.next = initialhead;
		head = temp;
		return head;
	}

	public static void main(String[] args) {
		Node<Integer> head = linkedlist.LinkedListUse.takeInput2();
		head = appendLastNtoFirst(head, 3);
		linkedlist.LinkedListUse.print(head);
	}

}
