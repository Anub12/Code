package linkedlist;

public class RemoveDuplicates {
	
	public static Node<Integer> removeDuplicates(Node<Integer> head) {
		if(head == null) {
			return head;
		}
		
		Node<Integer> currHead = head;
		while(currHead.next != null) {
			if(currHead.data.equals(currHead.next.data)) {
				currHead.next = currHead.next.next;
			} else {
				currHead = currHead.next;
			}
//			if(currHead.data == currHead.next.data) {
//				currHead.next = currHead.next.next;
//			} else {
//				currHead = currHead.next;
//			}
			// both ways are correct
		}
		return head;
	}

	public static void main(String[] args) {
		Node<Integer> head = linkedlist.LinkedListUse.takeInput2();
		head = removeDuplicates(head);
		linkedlist.LinkedListUse.print(head);
	}

}
