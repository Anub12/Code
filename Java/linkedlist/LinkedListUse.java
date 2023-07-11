package linkedlist;

import java.util.Scanner;

public class LinkedListUse {
	
	public static Node<Integer> createlinkedList() {
		Node<Integer> n1 = new Node<>(10);
		Node<Integer> n2 = new Node<>(20);
		Node<Integer> n3 = new Node<>(30);
		Node<Integer> n4 = new Node<>(40);
		n1.next = n2;
		n2.next = n3;
		n3.next = n4;
		return n1;
	}
	
	public static void increement(Node<Integer> head) {
		Node<Integer> temp = head;
		while(temp != null) {
			temp.data++;
			temp = temp.next;
		}
	}
	
	public static int length(Node<Integer> head) {
		Node<Integer> temp = head;
		int counter = 0;
		while(temp != null) {
			counter++;
			temp = temp.next;
		}
		return counter;
	}
	
	public static void print(Node<Integer> head) {
		Node<Integer> temp = head;
		while(temp != null) {
			System.out.print(temp.data + "->");
			temp = temp.next;
		}
		System.out.println();
	}
	
	public static void print2(Node<Integer> head) {
		if(head == null) {
			return;
		}
		
		System.out.print(head.data + "->");
		print2(head.next);
	}
	
	public static Node<Integer> takeInput() {
		Scanner s = new Scanner(System.in);
		int data = s.nextInt();
		Node<Integer> head = null;
		while(data != -1) {
			Node<Integer> currentNode = new Node<Integer>(data);
			if(head == null) {
				// make this node as head node
				head = currentNode;
			} else {
				Node<Integer> tail = head;
				while(tail.next != null) {
					tail = tail.next;
				}
				tail.next = currentNode;
			}
			data = s.nextInt();
		}
		return head;
	}
	
	public static Node<Integer> takeInput2() {
		Scanner s = new Scanner(System.in);
		int data = s.nextInt();
		Node<Integer> head = null, tail = null;
		while(data != -1) {
			Node<Integer> currentNode = new Node<Integer>(data);
			if(head == null) {
				head = currentNode;
				tail = currentNode;
			} else {
				tail.next = currentNode;
				tail = currentNode;
			}
			data = s.nextInt();
		}
		return head;
	}

	public static void main(String[] args) {
		
		Node<Integer> head = takeInput2();
		print(head);
		increement(head);
		print(head);
		print2(head);
		int l = length(head);
		System.out.println("\nThe length of the linked list is: " + l);
		// TODO Auto-generated method stub
//		Node<Integer> n1 = new Node<>(10);
//		System.out.println(n1);
//		System.out.println("Data is: " + n1.data);
//		System.out.println("Next is: " + n1.next);
	}
}
