package linkedlist;

public class MidPoint {
	
	public static Node<Integer> midPoint(Node<Integer> head) {
		
		if(head == null || head.next == null) {
			return head;
		}
		Node<Integer> slow = head;
		Node<Integer> fast = head.next;
		
		while(fast != null && fast.next != null) {
			slow = slow.next;
			fast = fast.next.next;
		}
		return slow;
	}

	public static void main(String[] args) {
		System.out.println("Mid Point of a linkedlist:");
		Node<Integer> head = linkedlist.LinkedListUse.takeInput2();
		Node<Integer> mPoint = midPoint(head);
//		linkedlist.LinkedListUse.print(mPoint);
		System.out.println("data of mid point of the linkedlist is: " + mPoint.data);
	}

}
